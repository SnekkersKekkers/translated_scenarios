BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_B",0.01);
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H4A0100000_01_000");
    MsgDisp("Kazama","Congrats.");
    MsgDisp("主人公","｛風真＊＊｝!
We won!");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("H4A0100000_01_010");
    MsgDisp("Kazama","Yeah, it was decided from the
beginning that you're the best.");
    MsgDisp("主人公","Hehe, thanks.
I did make some mistakes, you know?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H4A0100000_01_020");
    MsgDisp("Kazama","Taking that into account,
it's very like you to do something like
that. Full points.");
    MsgDisp("主人公","Hehe.");
    MsgDisp("主人公","(To think ｛風真＊＊｝
would be so happy about this. I'm glad
I stayed in the rhythmic gymnastics club!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_B",0.01);
    ChOpen(1,254,0,4,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(1);
    VoicePlay("H4A0100000_01_030");
    MsgDisp("Kazama","｛主人公｝,
congrats.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Were you watching?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H4A0100000_01_040");
    MsgDisp("Kazama","There's no way I would miss
your competition routine.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H4A0100000_01_050");
    MsgDisp("Kazama","As I expected from you.
It kind of looked like the light was
only shining on you.");
    MsgDisp("主人公","Hehe, you're exaggerating.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,4);
    VoicePlay("H4A0100000_01_060");
    MsgDisp("Kazama","No, I'm telling the truth.
It was dazzling.");
    ChMotion(1,0);
    MsgDisp("主人公","Thanks.
It makes me happy to hear you praise me
so much, ｛風真＊＊｝.");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H4A0100000_01_070");
    MsgDisp("Kazama","You were shining even more brightly
than usual.
Congratulations on winning.");
    MsgDisp("主人公","(I did it, I won!
｛風真＊＊｝ praised me too. I'm glad I
stayed in the rhythmic gymnastics club!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
