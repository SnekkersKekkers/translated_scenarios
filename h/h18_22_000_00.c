switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChLayout(1);
    MsgClose();
    ChOpen(22,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(22,3,1);
    VoicePlay("H182200000_22_000");
    MsgDisp("Hikaru","There you are!
Mari, I came to cheer you on!");
    MsgDisp("主人公","Ah, ｛ひかる＊｝.
Thank you!");
    ChMotion(22,4,1);
    VoicePlay("H182200000_22_010");
    MsgDisp("Hikaru","It's amazing.
You guys made it all the way to Koshien!");
    MsgDisp("主人公","Yeah, it's thanks to everyone
doing their best.");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H182200000_22_020");
    MsgDisp("Hikaru","Yeah!
Aim for victory～!
Right?");
    MsgDisp("主人公","(Victory......
Alright, let's do our best!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(22);
    break ;
    case 4:
    case 5:
    ChLayout(1);
    MsgClose();
    ChOpen(22,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H182200000_22_030");
    MsgDisp("Hikaru","Mari!
I came to cheer you on～▼");
    MsgDisp("主人公","Ah, ｛ひかる＊｝.
Thanks!");
    ChEye(22,0);
    ChMotion(22,0,1);
    VoicePlay("H182200000_22_040");
    MsgDisp("Hikaru","Mari's so amazing.
Making it all the way to Koshien.");
    MsgDisp("主人公","Hehe.
Not just me, it's thanks to the power of
everyone on the baseball team.");
    ChMotion(22,4,1);
    VoicePlay("H182200000_22_050");
    MsgDisp("Hikaru","The manager is on the team too,
you know? That means that Mari's support
is good enough to make it to Koshien♪");
    MsgDisp("主人公","Hehe!");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H182200000_22_060");
    MsgDisp("Hikaru","Hikaru's going to cheer really hard!
Make sure you win!");
    MsgDisp("主人公","(Victory...... that's right.
Alright, let's do our best!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(22);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
