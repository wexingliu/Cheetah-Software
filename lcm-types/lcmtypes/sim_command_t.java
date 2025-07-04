/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 * lcm-gen 1.5.1
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class sim_command_t implements lcm.lcm.LCMEncodable
{
    public int command_number;

    public int data_size;

    /**
     * LCM Type: double[data_size]
     */
    public double data[];

 
    public sim_command_t()
    {
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0x32e692d220533c5eL;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.sim_command_t.class))
            return 0L;
 
        classes.add(lcmtypes.sim_command_t.class);
        long hash = LCM_FINGERPRINT_BASE
            ;
        classes.remove(classes.size() - 1);
        return (hash<<1) + ((hash>>63)&1);
    }
 
    public void encode(DataOutput outs) throws IOException
    {
        outs.writeLong(LCM_FINGERPRINT);
        _encodeRecursive(outs);
    }
 
    public void _encodeRecursive(DataOutput outs) throws IOException
    {
        outs.writeInt(this.command_number); 
 
        outs.writeInt(this.data_size); 
 
        for (int a = 0; a < this.data_size; a++) {
            outs.writeDouble(this.data[a]); 
        }
 
    }
 
    public sim_command_t(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public sim_command_t(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.sim_command_t _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.sim_command_t o = new lcmtypes.sim_command_t();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.command_number = ins.readInt();
 
        this.data_size = ins.readInt();
 
        this.data = new double[(int) data_size];
        for (int a = 0; a < this.data_size; a++) {
            this.data[a] = ins.readDouble();
        }
 
    }
 
    public lcmtypes.sim_command_t copy()
    {
        lcmtypes.sim_command_t outobj = new lcmtypes.sim_command_t();
        outobj.command_number = this.command_number;
 
        outobj.data_size = this.data_size;
 
        outobj.data = new double[(int) data_size];
        if (this.data_size > 0)
            System.arraycopy(this.data, 0, outobj.data, 0, (int) this.data_size); 
        return outobj;
    }
 
}

