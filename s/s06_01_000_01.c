switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S060100001_01_000");
    MsgDisp("Kazama","That's it.
That's why it's so good to be back.");
    MsgDisp("主人公","The kimono?
Does it look okay?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S060100001_01_010");
    MsgDisp("Kazama","Yep.
Good.
It really suits you.");
    MsgDisp("主人公","(Yay!
I think ｛風真＊＊｝ likes it.)");
    break ;
    case 3:
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S060100001_01_020");
    MsgDisp("Kazama","...Yeah.
I came back just in time to see you in a
kimono.");
    MsgDisp("主人公","You really mean it?
I'm so happy.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S060100001_01_030");
    MsgDisp("Kazama","Ahh.
Turn around a little slowly for me.");
    MsgDisp("主人公","(Yay!
｛風真＊＊｝ seems like he's very happy!)");
    break ;
    case 4:
    case 5:
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S060100001_01_040");
    MsgDisp("Kazama","That's really nice, the kimono.
I'm glad I came back in time.");
    MsgDisp("主人公","Hehe.
I feel relieved when ｛風真＊＊｝ praises
me.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S060100001_01_050");
    MsgDisp("Kazama","Ahh, I won't let anyone bother you.");
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,1);
    ChCheek(1,7);
    VoicePlay("S060100001_01_060");
    MsgDisp("Kazama","To be honest, I wish I could keep this
sight all to myself...");
    MsgDisp("主人公","(Yay!
｛風真＊＊｝ seems to really like this!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
