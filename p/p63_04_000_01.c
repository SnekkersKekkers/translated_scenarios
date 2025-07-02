BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc723",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(This year we're doing herb tea and a
vegetable sale. It would be nice if it was
well-received...)");
    VoicePlay("P630400001_04_000");
    MsgDisp("Nanatsumori?","Herb tea and vegetables?");
    MsgClose();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,-1,-1,0,0,0,60);
    MsgDisp("主人公","Ah,｛七ツ森＊｝.
Welcome～1");
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("P630400001_04_010");
    MsgDisp("Nanatsumori","Do you eat the herb tea and
vegetables together?
Here.");
    MsgDisp("主人公","Nope. You drink the herb tea here though,
but the horticulture club's organic
vegetables are sold directly.");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P630400001_04_020");
    MsgDisp("Nanatsumori","Ah, so that's how it is.");
    MsgDisp("主人公","They're picked in the 
morning so, it's fresh.");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("P630400001_04_030");
    MsgDisp("Nanatsumori","Hmm.
Then first I'll go for some tea.");
    MsgDisp("主人公","Then, please come in!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(This year we're doing herb tea and a
vegetable sale. It would be nice if it was
well-received...)");
    MsgClose();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,-1,-1,0,0,0,60);
    VoiceEVSPlay(4);
    VoicePlay("P630400001_04_040");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","Ah,｛七ツ森＊｝.
Welcome～!");
    VoicePlay("P630400001_04_050");
    MsgDisp("Nanatsumori","Yeah.
Can you eat vegetables here too this year?");
    MsgDisp("主人公","Nope. You can drink herb tea though.The
vegetables are sold directly. They're
vegetables organically grown by the
horticulture club.");
    ChEye(4,5);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("P630400001_04_060");
    MsgDisp("Nanatsumori","Eeh.
Looking at it from this distance, 
the colour is good.");
    MsgDisp("主人公","They're picked in the morning,
so they're very fresh.");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("P630400001_04_070");
    MsgDisp("Nanatsumori","Are there ones you grew too?");
    MsgDisp("主人公","Of course!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P630400001_04_080");
    MsgDisp("Nanatsumori","ＯＫ.
Then, I'll have some tea first then 
I'll have a look over there.");
    MsgDisp("主人公","Yes, then please come in!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
