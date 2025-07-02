ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","My team is......
Ah, it's ｛本多＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(3,30,1,0,3,-1,-1,0,0);
    VoicePlay("O040301000_03_000");
    MsgDisp("Honda","Ah, you're with me?
Looking forward to it.");
    MsgDisp("主人公","Yeah, let's do our best!");
    break ;
    case 3:
    MsgDisp("主人公","My team is......
Ah, I'm with ｛本多＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(3,30,0,0,3,-1,-1,0,0);
    VoicePlay("O040301000_03_010");
    MsgDisp("Honda","Ah, you're on this team, too?
Looking forward to it.");
    MsgDisp("主人公","Me too!");
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("O040301000_03_020");
    MsgDisp("Honda","Starting from how we'll attack,
we need to plan a strategy......");
    MsgDisp("主人公","(R, right now?)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Um,
My team is......");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(3,30,3,3,3,-1,-1,0,0);
    VoicePlay("O040301000_03_030");
    MsgDisp("Honda","Over here!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝!
Are we on the same team?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("O040301000_03_040");
    MsgDisp("Honda","Yeah yeah!
It was worth making a wish.");
    MsgDisp("主人公","Huh?
Were you wishing for us to be
on the same team?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("O040301000_03_050");
    MsgDisp("Honda","I did. Since I wanted to have
the best sports festival with you. Now,
if we win, I'll have no other complaints!");
    MsgDisp("主人公","Hehe, yeah!
Let's do our best!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
