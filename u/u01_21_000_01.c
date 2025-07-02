ScrFadeOut(0);
BGOpen("ho210",0);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    SEPlay("EV_SE_577");
    MsgDisp("主人公","Phone call......
Oh, it's　｛みちる＊｝ ・");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    VoicePlay("U012100001_21_000");
    MsgDisp("Michiru","Hello Mari～
Can you talk right now?");
    MsgDisp("主人公","Sure, no problem.
What's up?");
    VoicePlay("U012100001_21_010");
    MsgDisp("Michiru","Today if you're free, would you 
like to go to the planetarium with me?");
    MsgSel("Sure, let's go！","Ahh, sorry. I can't today……");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("U012100001_21_020");
        MsgDisp("Michiru","Ah, thank god! Should we meet
up there then?");
        MsgDisp("主人公","Sure.
See you there soon!");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        break ;
        case 1:
        VoicePlay("U012100001_21_030");
        MsgDisp("Michiru","I see, how unfortunate......
Well then, maybe there will be another 
opportunity.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though she took the 
time to invite me......
Maybe that was the wrong choice?)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
