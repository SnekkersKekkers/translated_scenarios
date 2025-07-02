BGOpen("sc623",0);
ChLayout(1);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C06_INORI_C",0.01);
    ChOpen(6,254,3,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("H4A0600000_06_000");
    MsgDisp("Himuro","You did it.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("H4A0600000_06_010");
    MsgDisp("Himuro","That was a good performance.
Your expressive power was crazy.");
    MsgDisp("主人公","Hehe, thank goodness.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("H4A0600000_06_020");
    MsgDisp("Himuro","Yeah.
Congrats on winning.");
    MsgDisp("主人公","(I'm really glad
I stayed in the rhythmic gymnastics club!
Today's the best day ever!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C06_INORI_C",0.01);
    ChOpen(6,254,4,0,0,-1,-1,10,0);
    ScrFadeIn(0);
    VoicePlay("H4A0600000_06_030");
    MsgDisp("Himuro","Congrats.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
Thanks.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H4A0600000_06_040");
    MsgDisp("Himuro","How do I say this......
it was beautiful.");
    MsgDisp("主人公","Huh......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H4A0600000_06_050");
    MsgDisp("Himuro","The performance, you...... everything.
Isn't it obvious you'd win?");
    MsgDisp("主人公","Y, you think?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    ChCheek(6,0);
    VoicePlay("H4A0600000_06_060");
    MsgDisp("Himuro","Have some confidence.
The audience was glued to you.
Me too......");
    MsgDisp("主人公","You too......?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChCheek(6,10);
    VoicePlay("H4A0600000_06_070");
    MsgDisp("Himuro","Nothing!
......Anyways, congrats on winning.");
    MsgDisp("主人公","(I'm really glad I stayed in
the rhythmic gymnastics club......
Today's the best day ever!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChCheek(6,0);
