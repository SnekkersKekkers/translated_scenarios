BGOpen("sc761",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Next is...... Ah, it's ｛風真＊＊｝.)");
    MsgClose();
    ChOpen(1,30,0,0,2,-1,-1,0,0);
    ChEye(1,4);
    ChMotion(1,1);
    VoicePlay("O080100000_01_000");
    MsgDisp("Kazama","Is there no other music?");
    MsgDisp("主人公","Hehe, let's dance.");
    break ;
    case 3:
    MsgDisp("主人公","(Next is...... Ah, it's ｛風真＊＊｝.)");
    MsgClose();
    ChOpen(1,30,0,0,3,-1,-1,0,0);
    VoicePlay("O080100000_01_010");
    MsgDisp("Kazama","It's a little weird.");
    MsgDisp("主人公","Hm?
What's wrong?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O080100000_01_020");
    MsgDisp("Kazama","Nothing.
Just that we're both in our gym clothes,
and doing this weird dance.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Next is...... Ah, it's ｛風真＊＊｝.)");
    MsgClose();
    ChOpen(1,30,0,2,3,-1,-1,0,0);
    ChMotion(1,3);
    VoicePlay("O080100000_01_030");
    MsgDisp("Kazama","Finally.
I was tired of waiting.");
    MsgDisp("主人公","Hehe, thanks for waiting?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("O080100000_01_040");
    MsgDisp("Kazama","......Geez, don't get full of it.");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("O080100000_01_050");
    MsgDisp("Kazama","I spent too long watching you
dance with other guys.");
    MsgDisp("主人公","What?　It's embarrassing,
you don't have to watch that.");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,0);
    VoicePlay("O080100000_01_060");
    MsgDisp("Kazama","It's dangerous if I don't watch.
But wait, what do you mean
it's embarrassing!?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
