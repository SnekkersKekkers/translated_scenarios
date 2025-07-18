BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc722",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(This year the Gardening Club's program is
a cafe. I have to prepare herb tea and
cookies though...)");
    MsgClose();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("P630400000_04_000");
    MsgDisp("Nanatsumori","Hello.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Welcome～!");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("P630400000_04_010");
    MsgDisp("Nanatsumori","I came because I was charmed by the
captivating smell.");
    MsgDisp("主人公","Hehe. It's a shop serving tea and cookies
made with the herbs the Gardening Club
painstakingly grew.");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P630400000_04_020");
    MsgDisp("Nanatsumori","Ah, seems tasty.");
    MsgDisp("主人公","Yes, I have confidence!");
    ChMotion(4,1,1);
    VoicePlay("P630400000_04_030");
    MsgDisp("Nanatsumori","Then, I'll stop by here.");
    MsgDisp("主人公","Certainly.
One customer, please follow meー!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(This year the Gardening Club's program is
a cafe. I have to prepare herb tea and
cookies though...)");
    MsgClose();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("P630400000_04_040");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","｛七ツ森＊｝!
You came.");
    ChEye(4,4);
    ChMouth(4,4);
    VoicePlay("P630400000_04_050");
    MsgDisp("Nanatsumori","Hm...well.
I came to see how you're doing——");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,2,1);
    VoicePlay("P630400000_04_060");
    MsgDisp("Nanatsumori","No...
It's herb tea and cookies right?
The Gardening Clubs store.");
    MsgDisp("主人公","Yeah it is.
I have confidence it's delicious!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P630400000_04_070");
    MsgDisp("Nanatsumori","Oh.
Then I have to try it.");
    MsgDisp("主人公","Hehe!
Then one customer, please follow me!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
