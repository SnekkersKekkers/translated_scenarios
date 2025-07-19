ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Hm, my team is...
Ah, it's ｛柊＊＊＊｝.");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(5,30,0,0,4,#1,#1,0,0);
    VoicePlay("O040501000_05_000");
    MsgDisp("Hiiragi","So we're on the same team.");
    MsgDisp("主人公","Yeah, let's toss some balls!");
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("O040501000_05_010");
    MsgDisp("Hiiragi","Yes, this game looks quite fun.");
    break ;
    case 3:
    MsgDisp("主人公","(Hm, my team is...)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(5,30,0,0,4,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
We're on the same team.");
    ChEye(5,4);
    VoicePlay("O040501000_05_020");
    MsgDisp("Hiiragi","Yes, it seems that way.
I suppose I'm getting a little more into
it?");
    MsgDisp("主人公","Yeah, let's win, okay?");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("O040501000_05_030");
    MsgDisp("Hiiragi","Yes, I believe that there is a chance that
I will be successful in this event.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Hm, my team is...");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(5,30,0,4,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("O040501000_05_040");
    MsgDisp("Hiiragi","｛主人公｝, we seem to be on the same team.");
    MsgDisp("主人公","｛柊＊＊＊｝, let's do our best!");
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("O040501000_05_050");
    MsgDisp("Hiiragi","Yes, please watch me.
This sports festival, I will put my all
into this event.");
    MsgDisp("主人公","(｛柊＊＊＊｝ is really into it...?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
