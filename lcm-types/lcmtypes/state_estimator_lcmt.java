/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 * lcm-gen 1.5.1
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class state_estimator_lcmt implements lcm.lcm.LCMEncodable
{
    /**
     * LCM Type: float[3]
     */
    public float p[];

    /**
     * LCM Type: float[3]
     */
    public float vWorld[];

    /**
     * LCM Type: float[3]
     */
    public float vBody[];

    /**
     * LCM Type: float[3]
     */
    public float rpy[];

    /**
     * LCM Type: float[3]
     */
    public float omegaBody[];

    /**
     * LCM Type: float[3]
     */
    public float omegaWorld[];

    /**
     * LCM Type: float[4]
     */
    public float quat[];

 
    public state_estimator_lcmt()
    {
        p = new float[3];
        vWorld = new float[3];
        vBody = new float[3];
        rpy = new float[3];
        omegaBody = new float[3];
        omegaWorld = new float[3];
        quat = new float[4];
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0xc329843a643aae5bL;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.state_estimator_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.state_estimator_lcmt.class);
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
        for (int a = 0; a < 3; a++) {
            outs.writeFloat(this.p[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeFloat(this.vWorld[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeFloat(this.vBody[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeFloat(this.rpy[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeFloat(this.omegaBody[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeFloat(this.omegaWorld[a]); 
        }
 
        for (int a = 0; a < 4; a++) {
            outs.writeFloat(this.quat[a]); 
        }
 
    }
 
    public state_estimator_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public state_estimator_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.state_estimator_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.state_estimator_lcmt o = new lcmtypes.state_estimator_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.p = new float[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.p[a] = ins.readFloat();
        }
 
        this.vWorld = new float[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.vWorld[a] = ins.readFloat();
        }
 
        this.vBody = new float[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.vBody[a] = ins.readFloat();
        }
 
        this.rpy = new float[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.rpy[a] = ins.readFloat();
        }
 
        this.omegaBody = new float[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.omegaBody[a] = ins.readFloat();
        }
 
        this.omegaWorld = new float[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.omegaWorld[a] = ins.readFloat();
        }
 
        this.quat = new float[(int) 4];
        for (int a = 0; a < 4; a++) {
            this.quat[a] = ins.readFloat();
        }
 
    }
 
    public lcmtypes.state_estimator_lcmt copy()
    {
        lcmtypes.state_estimator_lcmt outobj = new lcmtypes.state_estimator_lcmt();
        outobj.p = new float[(int) 3];
        System.arraycopy(this.p, 0, outobj.p, 0, 3); 
        outobj.vWorld = new float[(int) 3];
        System.arraycopy(this.vWorld, 0, outobj.vWorld, 0, 3); 
        outobj.vBody = new float[(int) 3];
        System.arraycopy(this.vBody, 0, outobj.vBody, 0, 3); 
        outobj.rpy = new float[(int) 3];
        System.arraycopy(this.rpy, 0, outobj.rpy, 0, 3); 
        outobj.omegaBody = new float[(int) 3];
        System.arraycopy(this.omegaBody, 0, outobj.omegaBody, 0, 3); 
        outobj.omegaWorld = new float[(int) 3];
        System.arraycopy(this.omegaWorld, 0, outobj.omegaWorld, 0, 3); 
        outobj.quat = new float[(int) 4];
        System.arraycopy(this.quat, 0, outobj.quat, 0, 4); 
        return outobj;
    }
 
}

