BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323402_03_000");
MsgDisp("Honda","I really like the structure of the
planetary gear mechanism itself.");
MsgSel("If you think about difficult things, you might end up motion-sick ","If you like it, how about another round?","Planetary gear mechanism??");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,1);
        VoicePlay("B040323402_03_010");
        MsgDisp("Honda","I was purposefully distracting myself!");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040323402_03_020");
        MsgDisp("Honda","If I don't think about anything, I'll get
even more motion sick.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,0);
        VoicePlay("B040323402_03_030");
        MsgDisp("Honda","Besides, when I'm in a cup that's rotating
on its own axis while orbiting, it feels
like I'm on some unknown planet.");
        MsgDisp("主人公","Waa, that's great.");
        ChMotion(3,3);
        VoicePlay("B040323402_03_040");
        MsgDisp("Honda","See, it distracted you a bit right?");
        MsgDisp("主人公","I'm sorry I invited you even though you're
not good with these sorts of things.");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040323402_03_050");
        MsgDisp("Honda","Nuhーuh. If I was by myself, I couldn't
ride on a teacup? And I couldn't envision
it like I had just now.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040323402_03_060");
        MsgDisp("Honda","And that's why, if it's with you, it's
worthwhile going anywhere!");
        MsgDisp("主人公","Hehe, then I'll invite you again.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040323402_03_070");
        MsgDisp("Honda","Yep yep...Ah, but I think I'm good on the
teacups for a while.");
        MsgDisp("主人公","(Hmmm, what should we do?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(1);
    ChSet(3,2);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040323402_03_080");
    MsgDisp("Honda","I've had enough...");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040323402_03_090");
    MsgDisp("Honda","Yep yep, the mechanism of three axes and
gears. The coffee cup is play equipment
that that uses this principle.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
