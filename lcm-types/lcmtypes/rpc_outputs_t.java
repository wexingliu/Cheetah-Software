/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 * lcm-gen 1.5.1
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class rpc_outputs_t implements lcm.lcm.LCMEncodable
{
    public double cpu_opt_time_microseconds;

    public double t_sent;

    public double time_start;

    /**
     * LCM Type: double[5]
     */
    public double dt_pred[];

    /**
     * LCM Type: double[60]
     */
    public double x_opt[];

    /**
     * LCM Type: double[120]
     */
    public double u_opt[];

    /**
     * LCM Type: double[12]
     */
    public double p_opt[];

 
    public rpc_outputs_t()
    {
        dt_pred = new double[5];
        x_opt = new double[60];
        u_opt = new double[120];
        p_opt = new double[12];
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0xc89e670023d70089L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.rpc_outputs_t.class))
            return 0L;
 
        classes.add(lcmtypes.rpc_outputs_t.class);
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
        outs.writeDouble(this.cpu_opt_time_microseconds); 
 
        outs.writeDouble(this.t_sent); 
 
        outs.writeDouble(this.time_start); 
 
        for (int a = 0; a < 5; a++) {
            outs.writeDouble(this.dt_pred[a]); 
        }
 
        for (int a = 0; a < 60; a++) {
            outs.writeDouble(this.x_opt[a]); 
        }
 
        for (int a = 0; a < 120; a++) {
            outs.writeDouble(this.u_opt[a]); 
        }
 
        for (int a = 0; a < 12; a++) {
            outs.writeDouble(this.p_opt[a]); 
        }
 
    }
 
    public rpc_outputs_t(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public rpc_outputs_t(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.rpc_outputs_t _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.rpc_outputs_t o = new lcmtypes.rpc_outputs_t();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.cpu_opt_time_microseconds = ins.readDouble();
 
        this.t_sent = ins.readDouble();
 
        this.time_start = ins.readDouble();
 
        this.dt_pred = new double[(int) 5];
        for (int a = 0; a < 5; a++) {
            this.dt_pred[a] = ins.readDouble();
        }
 
        this.x_opt = new double[(int) 60];
        for (int a = 0; a < 60; a++) {
            this.x_opt[a] = ins.readDouble();
        }
 
        this.u_opt = new double[(int) 120];
        for (int a = 0; a < 120; a++) {
            this.u_opt[a] = ins.readDouble();
        }
 
        this.p_opt = new double[(int) 12];
        for (int a = 0; a < 12; a++) {
            this.p_opt[a] = ins.readDouble();
        }
 
    }
 
    public lcmtypes.rpc_outputs_t copy()
    {
        lcmtypes.rpc_outputs_t outobj = new lcmtypes.rpc_outputs_t();
        outobj.cpu_opt_time_microseconds = this.cpu_opt_time_microseconds;
 
        outobj.t_sent = this.t_sent;
 
        outobj.time_start = this.time_start;
 
        outobj.dt_pred = new double[(int) 5];
        System.arraycopy(this.dt_pred, 0, outobj.dt_pred, 0, 5); 
        outobj.x_opt = new double[(int) 60];
        System.arraycopy(this.x_opt, 0, outobj.x_opt, 0, 60); 
        outobj.u_opt = new double[(int) 120];
        System.arraycopy(this.u_opt, 0, outobj.u_opt, 0, 120); 
        outobj.p_opt = new double[(int) 12];
        System.arraycopy(this.p_opt, 0, outobj.p_opt, 0, 12); 
        return outobj;
    }
 
}

