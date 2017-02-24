package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgVolume3
{

    /**
     * Set the value of the Volume property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyVolume(long aValue);

    /**
     * Get a copy of the value of the Volume property
     *
     * @return value of the Volume property.
     */
    public long getPropertyVolume();

    /**
     * Set the value of the Mute property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyMute(boolean aValue);

    /**
     * Get a copy of the value of the Mute property
     *
     * @return value of the Mute property.
     */
    public boolean getPropertyMute();

    /**
     * Set the value of the Balance property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyBalance(int aValue);

    /**
     * Get a copy of the value of the Balance property
     *
     * @return value of the Balance property.
     */
    public int getPropertyBalance();

    /**
     * Set the value of the Fade property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyFade(int aValue);

    /**
     * Get a copy of the value of the Fade property
     *
     * @return value of the Fade property.
     */
    public int getPropertyFade();

    /**
     * Set the value of the VolumeLimit property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyVolumeLimit(long aValue);

    /**
     * Get a copy of the value of the VolumeLimit property
     *
     * @return value of the VolumeLimit property.
     */
    public long getPropertyVolumeLimit();

    /**
     * Set the value of the VolumeMax property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyVolumeMax(long aValue);

    /**
     * Get a copy of the value of the VolumeMax property
     *
     * @return value of the VolumeMax property.
     */
    public long getPropertyVolumeMax();

    /**
     * Set the value of the VolumeUnity property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyVolumeUnity(long aValue);

    /**
     * Get a copy of the value of the VolumeUnity property
     *
     * @return value of the VolumeUnity property.
     */
    public long getPropertyVolumeUnity();

    /**
     * Set the value of the VolumeSteps property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyVolumeSteps(long aValue);

    /**
     * Get a copy of the value of the VolumeSteps property
     *
     * @return value of the VolumeSteps property.
     */
    public long getPropertyVolumeSteps();

    /**
     * Set the value of the VolumeMilliDbPerStep property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyVolumeMilliDbPerStep(long aValue);

    /**
     * Get a copy of the value of the VolumeMilliDbPerStep property
     *
     * @return value of the VolumeMilliDbPerStep property.
     */
    public long getPropertyVolumeMilliDbPerStep();

    /**
     * Set the value of the BalanceMax property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyBalanceMax(long aValue);

    /**
     * Get a copy of the value of the BalanceMax property
     *
     * @return value of the BalanceMax property.
     */
    public long getPropertyBalanceMax();

    /**
     * Set the value of the FadeMax property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyFadeMax(long aValue);

    /**
     * Get a copy of the value of the FadeMax property
     *
     * @return value of the FadeMax property.
     */
    public long getPropertyFadeMax();

    /**
     * Set the value of the UnityGain property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyUnityGain(boolean aValue);

    /**
     * Get a copy of the value of the UnityGain property
     *
     * @return value of the UnityGain property.
     */
    public boolean getPropertyUnityGain();

    /**
     * Set the value of the VolumeOffsets property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyVolumeOffsets(String aValue);

    /**
     * Get a copy of the value of the VolumeOffsets property
     *
     * @return value of the VolumeOffsets property.
     */
    public String getPropertyVolumeOffsets();

    /**
     * Set the value of the VolumeOffsetMax property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyVolumeOffsetMax(long aValue);

    /**
     * Get a copy of the value of the VolumeOffsetMax property
     *
     * @return value of the VolumeOffsetMax property.
     */
    public long getPropertyVolumeOffsetMax();

    /**
     * Set the value of the Trim property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyTrim(String aValue);

    /**
     * Get a copy of the value of the Trim property
     *
     * @return value of the Trim property.
     */
    public String getPropertyTrim();
        
}

/**
 * Provider for the av.openhome.org:Volume:3 UPnP service.
 */
public class DvProviderAvOpenhomeOrgVolume3 extends DvProvider implements IDvProviderAvOpenhomeOrgVolume3
{

    public class Characteristics
    {
        private long iVolumeMax;
        private long iVolumeUnity;
        private long iVolumeSteps;
        private long iVolumeMilliDbPerStep;
        private long iBalanceMax;
        private long iFadeMax;

        public Characteristics(
            long aVolumeMax,
            long aVolumeUnity,
            long aVolumeSteps,
            long aVolumeMilliDbPerStep,
            long aBalanceMax,
            long aFadeMax
        )
        {
            iVolumeMax = aVolumeMax;
            iVolumeUnity = aVolumeUnity;
            iVolumeSteps = aVolumeSteps;
            iVolumeMilliDbPerStep = aVolumeMilliDbPerStep;
            iBalanceMax = aBalanceMax;
            iFadeMax = aFadeMax;
        }
        public long getVolumeMax()
        {
            return iVolumeMax;
        }
        public long getVolumeUnity()
        {
            return iVolumeUnity;
        }
        public long getVolumeSteps()
        {
            return iVolumeSteps;
        }
        public long getVolumeMilliDbPerStep()
        {
            return iVolumeMilliDbPerStep;
        }
        public long getBalanceMax()
        {
            return iBalanceMax;
        }
        public long getFadeMax()
        {
            return iFadeMax;
        }
    }

    private IDvInvocationListener iDelegateCharacteristics;
    private IDvInvocationListener iDelegateSetVolume;
    private IDvInvocationListener iDelegateVolumeInc;
    private IDvInvocationListener iDelegateVolumeDec;
    private IDvInvocationListener iDelegateVolume;
    private IDvInvocationListener iDelegateSetBalance;
    private IDvInvocationListener iDelegateBalanceInc;
    private IDvInvocationListener iDelegateBalanceDec;
    private IDvInvocationListener iDelegateBalance;
    private IDvInvocationListener iDelegateSetFade;
    private IDvInvocationListener iDelegateFadeInc;
    private IDvInvocationListener iDelegateFadeDec;
    private IDvInvocationListener iDelegateFade;
    private IDvInvocationListener iDelegateSetMute;
    private IDvInvocationListener iDelegateMute;
    private IDvInvocationListener iDelegateVolumeLimit;
    private IDvInvocationListener iDelegateUnityGain;
    private IDvInvocationListener iDelegateVolumeOffset;
    private IDvInvocationListener iDelegateSetVolumeOffset;
    private IDvInvocationListener iDelegateTrim;
    private IDvInvocationListener iDelegateSetTrim;
    private PropertyUint iPropertyVolume;
    private PropertyBool iPropertyMute;
    private PropertyInt iPropertyBalance;
    private PropertyInt iPropertyFade;
    private PropertyUint iPropertyVolumeLimit;
    private PropertyUint iPropertyVolumeMax;
    private PropertyUint iPropertyVolumeUnity;
    private PropertyUint iPropertyVolumeSteps;
    private PropertyUint iPropertyVolumeMilliDbPerStep;
    private PropertyUint iPropertyBalanceMax;
    private PropertyUint iPropertyFadeMax;
    private PropertyBool iPropertyUnityGain;
    private PropertyString iPropertyVolumeOffsets;
    private PropertyUint iPropertyVolumeOffsetMax;
    private PropertyString iPropertyTrim;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgVolume3(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "Volume", 3);
    }

    /**
     * Enable the Volume property.
     */
    public void enablePropertyVolume()
    {
        iPropertyVolume = new PropertyUint(new ParameterUint("Volume"));
        addProperty(iPropertyVolume);
    }

    /**
     * Enable the Mute property.
     */
    public void enablePropertyMute()
    {
        iPropertyMute = new PropertyBool(new ParameterBool("Mute"));
        addProperty(iPropertyMute);
    }

    /**
     * Enable the Balance property.
     */
    public void enablePropertyBalance()
    {
        iPropertyBalance = new PropertyInt(new ParameterInt("Balance"));
        addProperty(iPropertyBalance);
    }

    /**
     * Enable the Fade property.
     */
    public void enablePropertyFade()
    {
        iPropertyFade = new PropertyInt(new ParameterInt("Fade"));
        addProperty(iPropertyFade);
    }

    /**
     * Enable the VolumeLimit property.
     */
    public void enablePropertyVolumeLimit()
    {
        iPropertyVolumeLimit = new PropertyUint(new ParameterUint("VolumeLimit"));
        addProperty(iPropertyVolumeLimit);
    }

    /**
     * Enable the VolumeMax property.
     */
    public void enablePropertyVolumeMax()
    {
        iPropertyVolumeMax = new PropertyUint(new ParameterUint("VolumeMax"));
        addProperty(iPropertyVolumeMax);
    }

    /**
     * Enable the VolumeUnity property.
     */
    public void enablePropertyVolumeUnity()
    {
        iPropertyVolumeUnity = new PropertyUint(new ParameterUint("VolumeUnity"));
        addProperty(iPropertyVolumeUnity);
    }

    /**
     * Enable the VolumeSteps property.
     */
    public void enablePropertyVolumeSteps()
    {
        iPropertyVolumeSteps = new PropertyUint(new ParameterUint("VolumeSteps"));
        addProperty(iPropertyVolumeSteps);
    }

    /**
     * Enable the VolumeMilliDbPerStep property.
     */
    public void enablePropertyVolumeMilliDbPerStep()
    {
        iPropertyVolumeMilliDbPerStep = new PropertyUint(new ParameterUint("VolumeMilliDbPerStep"));
        addProperty(iPropertyVolumeMilliDbPerStep);
    }

    /**
     * Enable the BalanceMax property.
     */
    public void enablePropertyBalanceMax()
    {
        iPropertyBalanceMax = new PropertyUint(new ParameterUint("BalanceMax"));
        addProperty(iPropertyBalanceMax);
    }

    /**
     * Enable the FadeMax property.
     */
    public void enablePropertyFadeMax()
    {
        iPropertyFadeMax = new PropertyUint(new ParameterUint("FadeMax"));
        addProperty(iPropertyFadeMax);
    }

    /**
     * Enable the UnityGain property.
     */
    public void enablePropertyUnityGain()
    {
        iPropertyUnityGain = new PropertyBool(new ParameterBool("UnityGain"));
        addProperty(iPropertyUnityGain);
    }

    /**
     * Enable the VolumeOffsets property.
     */
    public void enablePropertyVolumeOffsets()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyVolumeOffsets = new PropertyString(new ParameterString("VolumeOffsets", allowedValues));
        addProperty(iPropertyVolumeOffsets);
    }

    /**
     * Enable the VolumeOffsetMax property.
     */
    public void enablePropertyVolumeOffsetMax()
    {
        iPropertyVolumeOffsetMax = new PropertyUint(new ParameterUint("VolumeOffsetMax"));
        addProperty(iPropertyVolumeOffsetMax);
    }

    /**
     * Enable the Trim property.
     */
    public void enablePropertyTrim()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyTrim = new PropertyString(new ParameterString("Trim", allowedValues));
        addProperty(iPropertyTrim);
    }

    /**
     * Set the value of the Volume property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyVolume(long aValue)
    {
        return setPropertyUint(iPropertyVolume, aValue);
    }

    /**
     * Get a copy of the value of the Volume property
     *
     * @return  value of the Volume property.
     */
    public long getPropertyVolume()
    {
        return iPropertyVolume.getValue();
    }

    /**
     * Set the value of the Mute property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyMute(boolean aValue)
    {
        return setPropertyBool(iPropertyMute, aValue);
    }

    /**
     * Get a copy of the value of the Mute property
     *
     * @return  value of the Mute property.
     */
    public boolean getPropertyMute()
    {
        return iPropertyMute.getValue();
    }

    /**
     * Set the value of the Balance property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyBalance(int aValue)
    {
        return setPropertyInt(iPropertyBalance, aValue);
    }

    /**
     * Get a copy of the value of the Balance property
     *
     * @return  value of the Balance property.
     */
    public int getPropertyBalance()
    {
        return iPropertyBalance.getValue();
    }

    /**
     * Set the value of the Fade property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyFade(int aValue)
    {
        return setPropertyInt(iPropertyFade, aValue);
    }

    /**
     * Get a copy of the value of the Fade property
     *
     * @return  value of the Fade property.
     */
    public int getPropertyFade()
    {
        return iPropertyFade.getValue();
    }

    /**
     * Set the value of the VolumeLimit property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyVolumeLimit(long aValue)
    {
        return setPropertyUint(iPropertyVolumeLimit, aValue);
    }

    /**
     * Get a copy of the value of the VolumeLimit property
     *
     * @return  value of the VolumeLimit property.
     */
    public long getPropertyVolumeLimit()
    {
        return iPropertyVolumeLimit.getValue();
    }

    /**
     * Set the value of the VolumeMax property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyVolumeMax(long aValue)
    {
        return setPropertyUint(iPropertyVolumeMax, aValue);
    }

    /**
     * Get a copy of the value of the VolumeMax property
     *
     * @return  value of the VolumeMax property.
     */
    public long getPropertyVolumeMax()
    {
        return iPropertyVolumeMax.getValue();
    }

    /**
     * Set the value of the VolumeUnity property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyVolumeUnity(long aValue)
    {
        return setPropertyUint(iPropertyVolumeUnity, aValue);
    }

    /**
     * Get a copy of the value of the VolumeUnity property
     *
     * @return  value of the VolumeUnity property.
     */
    public long getPropertyVolumeUnity()
    {
        return iPropertyVolumeUnity.getValue();
    }

    /**
     * Set the value of the VolumeSteps property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyVolumeSteps(long aValue)
    {
        return setPropertyUint(iPropertyVolumeSteps, aValue);
    }

    /**
     * Get a copy of the value of the VolumeSteps property
     *
     * @return  value of the VolumeSteps property.
     */
    public long getPropertyVolumeSteps()
    {
        return iPropertyVolumeSteps.getValue();
    }

    /**
     * Set the value of the VolumeMilliDbPerStep property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyVolumeMilliDbPerStep(long aValue)
    {
        return setPropertyUint(iPropertyVolumeMilliDbPerStep, aValue);
    }

    /**
     * Get a copy of the value of the VolumeMilliDbPerStep property
     *
     * @return  value of the VolumeMilliDbPerStep property.
     */
    public long getPropertyVolumeMilliDbPerStep()
    {
        return iPropertyVolumeMilliDbPerStep.getValue();
    }

    /**
     * Set the value of the BalanceMax property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyBalanceMax(long aValue)
    {
        return setPropertyUint(iPropertyBalanceMax, aValue);
    }

    /**
     * Get a copy of the value of the BalanceMax property
     *
     * @return  value of the BalanceMax property.
     */
    public long getPropertyBalanceMax()
    {
        return iPropertyBalanceMax.getValue();
    }

    /**
     * Set the value of the FadeMax property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyFadeMax(long aValue)
    {
        return setPropertyUint(iPropertyFadeMax, aValue);
    }

    /**
     * Get a copy of the value of the FadeMax property
     *
     * @return  value of the FadeMax property.
     */
    public long getPropertyFadeMax()
    {
        return iPropertyFadeMax.getValue();
    }

    /**
     * Set the value of the UnityGain property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyUnityGain(boolean aValue)
    {
        return setPropertyBool(iPropertyUnityGain, aValue);
    }

    /**
     * Get a copy of the value of the UnityGain property
     *
     * @return  value of the UnityGain property.
     */
    public boolean getPropertyUnityGain()
    {
        return iPropertyUnityGain.getValue();
    }

    /**
     * Set the value of the VolumeOffsets property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyVolumeOffsets(String aValue)
    {
        return setPropertyString(iPropertyVolumeOffsets, aValue);
    }

    /**
     * Get a copy of the value of the VolumeOffsets property
     *
     * @return  value of the VolumeOffsets property.
     */
    public String getPropertyVolumeOffsets()
    {
        return iPropertyVolumeOffsets.getValue();
    }

    /**
     * Set the value of the VolumeOffsetMax property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyVolumeOffsetMax(long aValue)
    {
        return setPropertyUint(iPropertyVolumeOffsetMax, aValue);
    }

    /**
     * Get a copy of the value of the VolumeOffsetMax property
     *
     * @return  value of the VolumeOffsetMax property.
     */
    public long getPropertyVolumeOffsetMax()
    {
        return iPropertyVolumeOffsetMax.getValue();
    }

    /**
     * Set the value of the Trim property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyTrim(String aValue)
    {
        return setPropertyString(iPropertyTrim, aValue);
    }

    /**
     * Get a copy of the value of the Trim property
     *
     * @return  value of the Trim property.
     */
    public String getPropertyTrim()
    {
        return iPropertyTrim.getValue();
    }

    /**
     * Signal that the action Characteristics is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Characteristics must be overridden if this is called.
     */      
    protected void enableActionCharacteristics()
    {
        Action action = new Action("Characteristics");
        action.addOutputParameter(new ParameterRelated("VolumeMax", iPropertyVolumeMax));
        action.addOutputParameter(new ParameterRelated("VolumeUnity", iPropertyVolumeUnity));
        action.addOutputParameter(new ParameterRelated("VolumeSteps", iPropertyVolumeSteps));
        action.addOutputParameter(new ParameterRelated("VolumeMilliDbPerStep", iPropertyVolumeMilliDbPerStep));
        action.addOutputParameter(new ParameterRelated("BalanceMax", iPropertyBalanceMax));
        action.addOutputParameter(new ParameterRelated("FadeMax", iPropertyFadeMax));
        iDelegateCharacteristics = new DoCharacteristics();
        enableAction(action, iDelegateCharacteristics);
    }

    /**
     * Signal that the action SetVolume is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetVolume must be overridden if this is called.
     */      
    protected void enableActionSetVolume()
    {
        Action action = new Action("SetVolume");
        action.addInputParameter(new ParameterRelated("Value", iPropertyVolume));
        iDelegateSetVolume = new DoSetVolume();
        enableAction(action, iDelegateSetVolume);
    }

    /**
     * Signal that the action VolumeInc is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * VolumeInc must be overridden if this is called.
     */      
    protected void enableActionVolumeInc()
    {
        Action action = new Action("VolumeInc");
        iDelegateVolumeInc = new DoVolumeInc();
        enableAction(action, iDelegateVolumeInc);
    }

    /**
     * Signal that the action VolumeDec is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * VolumeDec must be overridden if this is called.
     */      
    protected void enableActionVolumeDec()
    {
        Action action = new Action("VolumeDec");
        iDelegateVolumeDec = new DoVolumeDec();
        enableAction(action, iDelegateVolumeDec);
    }

    /**
     * Signal that the action Volume is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Volume must be overridden if this is called.
     */      
    protected void enableActionVolume()
    {
        Action action = new Action("Volume");
        action.addOutputParameter(new ParameterRelated("Value", iPropertyVolume));
        iDelegateVolume = new DoVolume();
        enableAction(action, iDelegateVolume);
    }

    /**
     * Signal that the action SetBalance is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetBalance must be overridden if this is called.
     */      
    protected void enableActionSetBalance()
    {
        Action action = new Action("SetBalance");
        action.addInputParameter(new ParameterRelated("Value", iPropertyBalance));
        iDelegateSetBalance = new DoSetBalance();
        enableAction(action, iDelegateSetBalance);
    }

    /**
     * Signal that the action BalanceInc is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * BalanceInc must be overridden if this is called.
     */      
    protected void enableActionBalanceInc()
    {
        Action action = new Action("BalanceInc");
        iDelegateBalanceInc = new DoBalanceInc();
        enableAction(action, iDelegateBalanceInc);
    }

    /**
     * Signal that the action BalanceDec is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * BalanceDec must be overridden if this is called.
     */      
    protected void enableActionBalanceDec()
    {
        Action action = new Action("BalanceDec");
        iDelegateBalanceDec = new DoBalanceDec();
        enableAction(action, iDelegateBalanceDec);
    }

    /**
     * Signal that the action Balance is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Balance must be overridden if this is called.
     */      
    protected void enableActionBalance()
    {
        Action action = new Action("Balance");
        action.addOutputParameter(new ParameterRelated("Value", iPropertyBalance));
        iDelegateBalance = new DoBalance();
        enableAction(action, iDelegateBalance);
    }

    /**
     * Signal that the action SetFade is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetFade must be overridden if this is called.
     */      
    protected void enableActionSetFade()
    {
        Action action = new Action("SetFade");
        action.addInputParameter(new ParameterRelated("Value", iPropertyFade));
        iDelegateSetFade = new DoSetFade();
        enableAction(action, iDelegateSetFade);
    }

    /**
     * Signal that the action FadeInc is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * FadeInc must be overridden if this is called.
     */      
    protected void enableActionFadeInc()
    {
        Action action = new Action("FadeInc");
        iDelegateFadeInc = new DoFadeInc();
        enableAction(action, iDelegateFadeInc);
    }

    /**
     * Signal that the action FadeDec is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * FadeDec must be overridden if this is called.
     */      
    protected void enableActionFadeDec()
    {
        Action action = new Action("FadeDec");
        iDelegateFadeDec = new DoFadeDec();
        enableAction(action, iDelegateFadeDec);
    }

    /**
     * Signal that the action Fade is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Fade must be overridden if this is called.
     */      
    protected void enableActionFade()
    {
        Action action = new Action("Fade");
        action.addOutputParameter(new ParameterRelated("Value", iPropertyFade));
        iDelegateFade = new DoFade();
        enableAction(action, iDelegateFade);
    }

    /**
     * Signal that the action SetMute is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetMute must be overridden if this is called.
     */      
    protected void enableActionSetMute()
    {
        Action action = new Action("SetMute");
        action.addInputParameter(new ParameterRelated("Value", iPropertyMute));
        iDelegateSetMute = new DoSetMute();
        enableAction(action, iDelegateSetMute);
    }

    /**
     * Signal that the action Mute is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Mute must be overridden if this is called.
     */      
    protected void enableActionMute()
    {
        Action action = new Action("Mute");
        action.addOutputParameter(new ParameterRelated("Value", iPropertyMute));
        iDelegateMute = new DoMute();
        enableAction(action, iDelegateMute);
    }

    /**
     * Signal that the action VolumeLimit is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * VolumeLimit must be overridden if this is called.
     */      
    protected void enableActionVolumeLimit()
    {
        Action action = new Action("VolumeLimit");
        action.addOutputParameter(new ParameterRelated("Value", iPropertyVolumeLimit));
        iDelegateVolumeLimit = new DoVolumeLimit();
        enableAction(action, iDelegateVolumeLimit);
    }

    /**
     * Signal that the action UnityGain is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * UnityGain must be overridden if this is called.
     */      
    protected void enableActionUnityGain()
    {
        Action action = new Action("UnityGain");
        action.addOutputParameter(new ParameterRelated("Value", iPropertyUnityGain));
        iDelegateUnityGain = new DoUnityGain();
        enableAction(action, iDelegateUnityGain);
    }

    /**
     * Signal that the action VolumeOffset is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * VolumeOffset must be overridden if this is called.
     */      
    protected void enableActionVolumeOffset()
    {
        Action action = new Action("VolumeOffset");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Channel", allowedValues));
        action.addOutputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
        iDelegateVolumeOffset = new DoVolumeOffset();
        enableAction(action, iDelegateVolumeOffset);
    }

    /**
     * Signal that the action SetVolumeOffset is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetVolumeOffset must be overridden if this is called.
     */      
    protected void enableActionSetVolumeOffset()
    {
        Action action = new Action("SetVolumeOffset");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Channel", allowedValues));
        action.addInputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
        iDelegateSetVolumeOffset = new DoSetVolumeOffset();
        enableAction(action, iDelegateSetVolumeOffset);
    }

    /**
     * Signal that the action Trim is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Trim must be overridden if this is called.
     */      
    protected void enableActionTrim()
    {
        Action action = new Action("Trim");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Channel", allowedValues));
        action.addOutputParameter(new ParameterInt("TrimBinaryMilliDb"));
        iDelegateTrim = new DoTrim();
        enableAction(action, iDelegateTrim);
    }

    /**
     * Signal that the action SetTrim is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetTrim must be overridden if this is called.
     */      
    protected void enableActionSetTrim()
    {
        Action action = new Action("SetTrim");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Channel", allowedValues));
        action.addInputParameter(new ParameterInt("TrimBinaryMilliDb"));
        iDelegateSetTrim = new DoSetTrim();
        enableAction(action, iDelegateSetTrim);
    }

    /**
     * Characteristics action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Characteristics action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionCharacteristics} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected Characteristics characteristics(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetVolume action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetVolume action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetVolume} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aValue
     */
    protected void setVolume(IDvInvocation aInvocation, long aValue)
    {
        throw (new ActionDisabledError());
    }

    /**
     * VolumeInc action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * VolumeInc action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionVolumeInc} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void volumeInc(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * VolumeDec action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * VolumeDec action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionVolumeDec} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void volumeDec(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Volume action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Volume action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionVolume} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long volume(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetBalance action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetBalance action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetBalance} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aValue
     */
    protected void setBalance(IDvInvocation aInvocation, int aValue)
    {
        throw (new ActionDisabledError());
    }

    /**
     * BalanceInc action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * BalanceInc action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionBalanceInc} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void balanceInc(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * BalanceDec action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * BalanceDec action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionBalanceDec} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void balanceDec(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Balance action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Balance action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionBalance} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected int balance(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetFade action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetFade action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetFade} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aValue
     */
    protected void setFade(IDvInvocation aInvocation, int aValue)
    {
        throw (new ActionDisabledError());
    }

    /**
     * FadeInc action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * FadeInc action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionFadeInc} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void fadeInc(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * FadeDec action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * FadeDec action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionFadeDec} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void fadeDec(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Fade action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Fade action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionFade} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected int fade(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetMute action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetMute action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetMute} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aValue
     */
    protected void setMute(IDvInvocation aInvocation, boolean aValue)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Mute action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Mute action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionMute} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean mute(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * VolumeLimit action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * VolumeLimit action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionVolumeLimit} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long volumeLimit(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * UnityGain action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * UnityGain action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionUnityGain} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean unityGain(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * VolumeOffset action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * VolumeOffset action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionVolumeOffset} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aChannel
     */
    protected int volumeOffset(IDvInvocation aInvocation, String aChannel)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetVolumeOffset action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetVolumeOffset action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetVolumeOffset} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aChannel
     * @param aVolumeOffsetBinaryMilliDb
     */
    protected void setVolumeOffset(IDvInvocation aInvocation, String aChannel, int aVolumeOffsetBinaryMilliDb)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Trim action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Trim action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionTrim} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aChannel
     */
    protected int trim(IDvInvocation aInvocation, String aChannel)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetTrim action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetTrim action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetTrim} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aChannel
     * @param aTrimBinaryMilliDb
     */
    protected void setTrim(IDvInvocation aInvocation, String aChannel, int aTrimBinaryMilliDb)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Must be called for each class instance.  Must be called before Core.Library.Close().
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            super.dispose();
            iHandle = 0;
        }
    }


    private class DoCharacteristics implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long volumeMax;
            long volumeUnity;
            long volumeSteps;
            long volumeMilliDbPerStep;
            long balanceMax;
            long fadeMax;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            Characteristics outArgs = characteristics(invocation);
            volumeMax = outArgs.getVolumeMax();
            volumeUnity = outArgs.getVolumeUnity();
            volumeSteps = outArgs.getVolumeSteps();
            volumeMilliDbPerStep = outArgs.getVolumeMilliDbPerStep();
            balanceMax = outArgs.getBalanceMax();
            fadeMax = outArgs.getFadeMax();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Characteristics");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("VolumeMax", volumeMax);
                invocation.writeUint("VolumeUnity", volumeUnity);
                invocation.writeUint("VolumeSteps", volumeSteps);
                invocation.writeUint("VolumeMilliDbPerStep", volumeMilliDbPerStep);
                invocation.writeUint("BalanceMax", balanceMax);
                invocation.writeUint("FadeMax", fadeMax);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetVolume implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long value;
            try
            {
                invocation.readStart();
                value = invocation.readUint("Value");
                invocation.readEnd();
                setVolume(invocation, value);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetVolume");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoVolumeInc implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                volumeInc(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "VolumeInc");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoVolumeDec implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                volumeDec(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "VolumeDec");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoVolume implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long value;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 value = volume(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Volume");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("Value", value);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetBalance implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            int value;
            try
            {
                invocation.readStart();
                value = invocation.readInt("Value");
                invocation.readEnd();
                setBalance(invocation, value);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetBalance");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoBalanceInc implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                balanceInc(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "BalanceInc");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoBalanceDec implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                balanceDec(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "BalanceDec");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoBalance implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            int value;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 value = balance(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Balance");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeInt("Value", value);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetFade implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            int value;
            try
            {
                invocation.readStart();
                value = invocation.readInt("Value");
                invocation.readEnd();
                setFade(invocation, value);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetFade");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoFadeInc implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                fadeInc(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "FadeInc");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoFadeDec implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                fadeDec(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "FadeDec");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoFade implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            int value;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 value = fade(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Fade");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeInt("Value", value);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetMute implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean value;
            try
            {
                invocation.readStart();
                value = invocation.readBool("Value");
                invocation.readEnd();
                setMute(invocation, value);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetMute");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoMute implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean value;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 value = mute(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Mute");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeBool("Value", value);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoVolumeLimit implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long value;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 value = volumeLimit(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "VolumeLimit");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("Value", value);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoUnityGain implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean value;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 value = unityGain(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "UnityGain");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeBool("Value", value);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoVolumeOffset implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String channel;
            int volumeOffsetBinaryMilliDb;
            try
            {
                invocation.readStart();
                channel = invocation.readString("Channel");
                invocation.readEnd();
                 volumeOffsetBinaryMilliDb = volumeOffset(invocation, channel);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "VolumeOffset");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeInt("VolumeOffsetBinaryMilliDb", volumeOffsetBinaryMilliDb);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetVolumeOffset implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String channel;
            int volumeOffsetBinaryMilliDb;
            try
            {
                invocation.readStart();
                channel = invocation.readString("Channel");
                volumeOffsetBinaryMilliDb = invocation.readInt("VolumeOffsetBinaryMilliDb");
                invocation.readEnd();
                setVolumeOffset(invocation, channel, volumeOffsetBinaryMilliDb);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetVolumeOffset");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoTrim implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String channel;
            int trimBinaryMilliDb;
            try
            {
                invocation.readStart();
                channel = invocation.readString("Channel");
                invocation.readEnd();
                 trimBinaryMilliDb = trim(invocation, channel);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Trim");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeInt("TrimBinaryMilliDb", trimBinaryMilliDb);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetTrim implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String channel;
            int trimBinaryMilliDb;
            try
            {
                invocation.readStart();
                channel = invocation.readString("Channel");
                trimBinaryMilliDb = invocation.readInt("TrimBinaryMilliDb");
                invocation.readEnd();
                setTrim(invocation, channel, trimBinaryMilliDb);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetTrim");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }
}

