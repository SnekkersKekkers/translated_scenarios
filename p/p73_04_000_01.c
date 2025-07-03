BGMStop();
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,3,-1,-1,0,0,0,60);
    VoicePlay("P730400001_04_000");
    MsgDisp("Nanatsumori","Ohー.
Pretty pretty.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Really?");
    ChMotion(4,1,1);
    VoicePlay("P730400001_04_010");
    MsgDisp("Nanatsumori","I wouldn't lie about such things.
It seriously suits you, it's pretty.");
    MsgDisp("主人公","Thank you.");
    ChEye(4,1);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P730400001_04_020");
    MsgDisp("Nanatsumori","All that's left is to walk well on
the runway?");
    MsgDisp("主人公","Ugh... that's pressureー...");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P730400001_04_030");
    MsgDisp("Nanatsumori","Show me your cool side!
I'll be cheering you on.");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(｛七ツ森＊｝ will be cheering me on!
Alーright, let's do it!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,2,-1,-1,0,0,0,60);
    VoicePlay("P730400001_04_040");
    MsgDisp("Nanatsumori","Ah...");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!");
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("P730400001_04_050");
    MsgDisp("Nanatsumori","You transformed...");
    MsgDisp("主人公","Hey, what's that supposed to mean?");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P730400001_04_060");
    MsgDisp("Nanatsumori","Ah... sorry for saying it like that.
It's very beautiful.");
    MsgDisp("主人公","Really?
Thank you!");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("P730400001_04_070");
    MsgDisp("Nanatsumori","That's...
The grown-up charm is strong, and...");
    MsgDisp("主人公","？");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P730400001_04_080");
    MsgDisp("Nanatsumori","Go proudly.
You'll knockout the audience.");
    MsgDisp("主人公","Hehe!
Then, I'm off!");
    MsgDisp("主人公","(｛七ツ森＊｝ is cheering for me...!
Alーright, let's do it!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(4,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
