BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J010300000_03_000");
    MsgDisp("Honda","Hello.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝?
It's
｛主人公苗字｝.");
    VoicePlay("J010300000_03_010");
    MsgDisp("Honda","Hmm?
What's going on?");
    MsgDisp("主人公","Uh, well...");
    break ;
    case 3:
    VoicePlay("J010300000_03_020");
    MsgDisp("Honda","Hello.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝? It's
｛主人公苗字｝. Is
now a good time to talk?");
    VoicePlay("J010300000_03_030");
    MsgDisp("Honda","Sure!
What's up?");
    MsgDisp("主人公","Uh, you see...");
    break ;
    case 4:
    case 5:
    VoicePlay("J010300000_03_040");
    MsgDisp("Honda","Hello.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝?
It's
｛主人公苗字｝.");
    VoicePlay("J010300000_03_050");
    MsgDisp("Honda","Just in time.
I've been wanting to talk with you too.");
    VoicePlay("J010300000_03_060");
    MsgDisp("Honda","So, what's going on?");
    MsgDisp("主人公","Well...");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
