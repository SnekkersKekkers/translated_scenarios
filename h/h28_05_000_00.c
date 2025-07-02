ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    MsgClose();
    ScrFadeIn(0);
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("H280500000_05_000");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Did you come to show your support?");
    VoicePlay("H280500000_05_010");
    MsgDisp("Hiiragi","Yes.
I'm excited to see the Haba High team
that you have created.");
    MsgDisp("主人公","I was just helping everyone as
their manager though, you know?");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("H280500000_05_020");
    MsgDisp("Hiiragi","Yes, that's the job of a manager.
You're working hard as well.");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("H280500000_05_030");
    MsgDisp("Hiiragi","It'll be fine.
Your hard work will show itself in the
results the team receives.");
    MsgDisp("主人公","｛柊＊＊＊｝, thank you.
......I'll be going!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
