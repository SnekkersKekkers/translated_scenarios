switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    MsgClose();
    ChOpen(21,254,7,0,0,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,3);
    VoicePlay("H382100000_21_000");
    MsgDisp("Michiru","Hehe, how cool.");
    MsgDisp("主人公","Ah, ｛みちる＊｝! Did you come to
support me?");
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("H382100000_21_010");
    MsgDisp("Michiru","Right. I think Mari can win, but I'll be
praying that you don't get hurt. Okay?");
    MsgDisp("主人公","Thanks!");
    MsgDisp("主人公","(｛みちる＊｝ is cheering me on......!
Alright, let's do our best!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(21,0,0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(21,254,7,0,0,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("H382100000_21_020");
    MsgDisp("Michiru","Mari.");
    MsgDisp("主人公","Ah, ｛みちる＊｝. Did you come to
support me?");
    ChEye(21,4);
    ChMouth(21,4);
    ChMotion(21,4);
    VoicePlay("H382100000_21_030");
    MsgDisp("Michiru","Right.
But, I'm a little worried.");
    MsgDisp("主人公","Hm?");
    ChEye(21,0);
    ChMouth(21,4);
    ChMotion(21,5);
    VoicePlay("H382100000_21_040");
    MsgDisp("Michiru","Not about you winning or losing. This is
an intense sport, so be careful not to get
injured. Please.");
    MsgDisp("主人公","Thank you.
I'll be careful, and go win!");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H382100000_21_050");
    MsgDisp("Michiru","Hehe, how reliable.
I'll be wishing you the best of luck from
my seat in the audience.");
    MsgDisp("主人公","(｛みちる＊｝ is cheering me on......!
Alright, let's do our best!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(21,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
