using System.Runtime.InteropServices;
using System;

internal class Program
{
    [DllImport("Thing.dll")]
    private static extern int CreateThing(Guid riid, out IntPtr ppThing);

    [ComVisible(true)]
    [Guid("0e18b4ce-e30c-4098-9ae4-61d9b184bbea")]
    [InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    public interface IThing
    {
        int Hello();
    }

    static void Main(string[] args)
    {
        if (CreateThing(typeof(IThing).GUID, out IntPtr thingPtr) >= 0)
        {
            if (Marshal.GetTypedObjectForIUnknown(thingPtr, typeof(IThing)) is IThing thing)
            {
                try
                {
                    thing.Hello();
                }
                finally
                {
                    Marshal.ReleaseComObject(thing);
                }
            }
        }
    }
}
