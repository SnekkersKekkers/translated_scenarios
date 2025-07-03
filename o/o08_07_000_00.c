BGOpen("sc761",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Next is......
Ah, ｛御影＊＊｝!?)");
    MsgClose();
    ChOpen(7,37,0,0,0,-1,-1,0,0);
    VoicePlay("O080700000_07_000");
    MsgDisp("Mikage","I'm filling in for
the boy who ran away.
Isn't it such a waste?");
    MsgDisp("主人公","Um......
Please treat me well.");
    break ;
    case 3:
    MsgDisp("主人公","(Next is......
Huh, ｛御影＊＊｝?)");
    MsgClose();
    ChOpen(7,37,0,0,0,-1,-1,0,0);
    VoicePlay("O080700000_07_010");
    MsgDisp("Mikage","It seems like there aren't enough guys.
Sorry.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("O080700000_07_020");
    MsgDisp("Mikage","Judging from the music, this will be fun.");
    MsgDisp("主人公","Yes, let's dance.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Next is......
Huh, ｛御影＊＊｝?)");
    MsgClose();
    ChOpen(7,37,0,0,0,-1,-1,0,0);
    VoicePlay("O080700000_07_030");
    MsgDisp("Mikage","Saying there aren't enough guys
is just an excuse. I want to do this.");
    MsgDisp("主人公","Hehe, how nice.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("O080700000_07_040");
    MsgDisp("Mikage","I guess so.
I heard that vice principal Himuro
also participated in the past.");
    MsgDisp("主人公","Huh!?
Is that true?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("O080700000_07_050");
    MsgDisp("Mikage","That's why teachers
particpate so often.");
    MsgDisp("主人公","I see. Let's dance.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
