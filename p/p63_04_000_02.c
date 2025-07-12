BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc724",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(This year we're doing an organic cafe.
It's a culmination of my efforts
in the Gardening Club...)");
    MsgClose();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("P630400002_04_000");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Welcome.");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P630400002_04_010");
    MsgDisp("Nanatsumori","It's somewhat amazing.
It doesn't look like the school.");
    MsgDisp("主人公","Hehe! We've prepared food and drinks using
the herbs and vegetables organically grown
the by the Gardening Club!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P630400002_04_020");
    MsgDisp("Nanatsumori","Heeh.
The Gardening Club evolve each 
year, huh...");
    MsgDisp("主人公","If you'd like, how about I recommend
something on the menu to you?");
    VoicePlay("P630400002_04_030");
    MsgDisp("Nanatsumori","Yeah.
Then, I guess I'll stop by.");
    MsgDisp("主人公","Certainly.
Then an organically grown salad
and herb tea please! ");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(This year we're doing an organic cafe.
It's a culmination of my efforts
in the Gardening Club...)");
    MsgClose();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,5,4,#1,#1,0,0,0,60);
    VoicePlay("P630400002_04_040");
    MsgDisp("Nanatsumori","Ohー...");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
Welcome.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P630400002_04_050");
    MsgDisp("Nanatsumori","It's stylish.
Is this really the Gardening Club?");
    MsgDisp("主人公","Hehe.
This year we tried our hand 
at an organic cafe!");
    ChEye(4,3);
    ChMotion(4,0,1);
    VoicePlay("P630400002_04_060");
    MsgDisp("Nanatsumori","Heeh.
Then the herbs and vegetables are from 
the gardening club?");
    MsgDisp("主人公","That's right.
The vegetables are organic, 
so it's gentle on your body▼");
    ChEye(4,4);
    ChMouth(4,3);
    ChCheek(4,5);
    VoicePlay("P630400002_04_070");
    MsgDisp("Nanatsumori","Ugh...");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,2,1);
    VoicePlay("P630400002_04_080");
    MsgDisp("Nanatsumori","I'd like recommendations.");
    MsgDisp("主人公","Thank you very much!
An organically grown salad and 
herb tea please!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChCheek(4,0);
