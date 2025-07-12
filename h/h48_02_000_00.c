BGOpen("sc623",0);
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgClose();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoicePlay("H480200000_02_000");
    MsgDisp("Sassa","How are you feeling?");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Did you come to cheer me on?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("H480200000_02_010");
    MsgDisp("Sassa","I'm not really sure about
the rules, is there a certain way
I need to cheer?");
    MsgDisp("主人公","I don't think so.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("H480200000_02_020");
    MsgDisp("Sassa","I see.
Then I'll try to cheer in a way that
won't distract you. Good luck.");
    MsgDisp("主人公","(｛颯砂＊＊｝ is here to
cheer for me, too.
Let's do our best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
