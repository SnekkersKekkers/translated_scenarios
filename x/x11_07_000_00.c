switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("X110700000_07_000");
    MsgDisp("Mikage","Didn't the baseball team win
their match the other day?");
    MsgDisp("主人公","Ah, yes. That's right.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("X110700000_07_010");
    MsgDisp("Mikage","It's thanks to the manager's support.
You're doing great.");
    MsgDisp("主人公","(I wonder if I was of help to everyone?
I would be happy if that were the case!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,254,3,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("X110700000_07_020");
    MsgDisp("Mikage","Congratulations!");
    MsgDisp("主人公","Eh, for what?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("X110700000_07_030");
    MsgDisp("Mikage","The baseball team won their
practice match, right?");
    MsgDisp("主人公","Yes!
Everyone gave it their best.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("X110700000_07_040");
    MsgDisp("Mikage","It's not just the athletes, 
the manager also put in a 
lot of effort.");
    MsgDisp("主人公","(To think that I was praised
by ｛御影＊＊｝...
I'm so happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
