BGOpen("fp200",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040408301_04_000");
MsgDisp("Nanatsumori","In the summer, 
those guys become energetic...");
MsgSel("Shall we go looking for bus?","Maybe they get power from the sun?","You need AC in the summer after all!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040408301_04_010");
    MsgDisp("Nanatsumori","I firmly decline.
Feel free to go by yourself.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040408301_04_020");
    MsgDisp("Nanatsumori","It's hard to be a human...
I mean, I don't need the power of the 
sun in the middle of summer...");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040408301_04_030");
    MsgDisp("Nanatsumori","I feel the same.
Let's look for somewhere with air con.
I'll treat you to ice cream.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
