BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040203302_02_000");
MsgDisp("Sassa","This place kind of reminds me of a 
sunken ship.");
MsgSel("Ah, an oarfish!","There's a shadow in boat window......","I think that sunken ship had treasure");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3,1);
    VoicePlay("B040203302_02_010");
    MsgDisp("Sassa","Eh, where?　
Hey, are you listening to me?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,5);
        VoicePlay("B040203302_02_020");
        MsgDisp("Sassa","Eh, which window?
Sigh......Stop messing around.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,5);
        VoicePlay("B040203302_02_030");
        MsgDisp("Sassa","Eh, which window?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,3);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040203302_02_040");
        MsgDisp("Sassa","......Was that a joke?");
        MsgDisp("主人公","Hehe, sorry.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,3);
        VoicePlay("B040203302_02_050");
        MsgDisp("Sassa","No good.
I can tell by your face that you'll do
it again.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,0);
        VoicePlay("B040203302_02_060");
        MsgDisp("Sassa","......Now that I think about it,
this place has the same vibe as a 
Haunted House.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040203302_02_070");
        MsgDisp("Sassa","You could call that ship a 
ghost ship.");
        MsgDisp("主人公","Isn't it just a sunken ship?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040203302_02_080");
        MsgDisp("Sassa","The people that died on the
sunken ship becomes ghosts. It's
basically the same.");
        MsgDisp("主人公","U-Uhm......");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,3);
        VoicePlay("B040203302_02_090");
        MsgDisp("Sassa","Give me your hand.");
        MsgDisp("主人公","?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,3);
        VoicePlay("B040203302_02_100");
        MsgDisp("Sassa","When it's dark, it's easy to
trip, so it's good for us to hold hands.");
        MsgDisp("主人公","Y-Yeah.");
        ChLayout(0);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,2);
        VoicePlay("B040203302_02_110");
        MsgDisp("Sassa","Okay, let's go this way.");
        MsgDisp("主人公","(｛颯砂＊＊｝, this
isn't a haunted house.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040203302_02_120");
    MsgDisp("Sassa","Yeah, it's got a great vibe.
The two of us should try hunting for
treasure someday.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
