BGMStop();
BGOpen("sc605",0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Alright, and. I finished moving the
chairs, so what should I carry, and where
do I carry it to next...?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("P830400000_04_000");
    MsgDisp("Nanatsumori","Yo.
Busy?");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Yeah, super busy.");
    ChEye(4,2);
    ChMouth(4,3);
    VoicePlay("P830400000_04_010");
    MsgDisp("Nanatsumori","Well, that's part of management.");
    VoicePlay("P830400000_46_000");
    MsgDisp("School Girl","Umー. The audiovisual room doesn't have
enough blackout curtains. Could you bring
some?");
    MsgDisp("主人公","Yeーs.
Then I'll be going now!");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("P830400000_04_020");
    MsgDisp("Nanatsumori","It's seriously hard huh...");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Alright, and. I finished moving the
chairs, so what should I carry, and where
do I carry it to next...?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("P830400000_04_030");
    MsgDisp("Nanatsumori","Yo.
Thanks for your hard work.");
    MsgDisp("主人公","｛七ツ森＊｝.
Sorry, I'm a bit busy right now...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P830400000_04_040");
    MsgDisp("Nanatsumori","I can see that.
Would you like some help?");
    MsgDisp("主人公","Thank you.
But, I'm responsible for this myself.");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("P830400000_46_010");
    MsgDisp("School Girl","Excuse meー. The audiovisual room doesn't
have enough blackout curtains. Could you
bring some?");
    MsgDisp("主人公","Yesー!
I'll go now!");
    ChEye(4,2);
    ChMouth(4,3);
    VoicePlay("P830400000_04_050");
    MsgDisp("Nanatsumori","I'll help after all.
I can't leave her alone after all.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4);
