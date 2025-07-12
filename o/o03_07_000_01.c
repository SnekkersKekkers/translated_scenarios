MsgClose();
BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
ChOpen(7,37,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("O030700001_07_000");
    MsgDisp("Mikage","That was fun.
Well, that's how it is.");
    MsgDisp("主人公","(Hm.
And we were so close......)");
    break ;
    case 3:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O030700001_07_010");
    MsgDisp("Mikage","We were close.");
    MsgDisp("主人公","Yes, just a little more, and......");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("O030700001_07_020");
    MsgDisp("Mikage","But everyone got pretty loud
when they saw us, right?");
    MsgDisp("主人公","(Yeah, it'll be a good memory......
But, I wish we had won.)");
    break ;
    case 4:
    case 5:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O030700001_07_030");
    MsgDisp("Mikage","Aah.
We just needed one more step.");
    MsgDisp("主人公","I'm sorry.
I pulled on your leg......");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("O030700001_07_040");
    MsgDisp("Mikage","What are you saying?
It's a three-legged race, isn't it?
That's why it's so fun.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("O030700001_07_050");
    MsgDisp("Mikage","Good work.");
    MsgDisp("主人公","(We didn't get first place, but,
I'm glad I went with ｛御影＊＊｝......)");
    MsgClose();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
