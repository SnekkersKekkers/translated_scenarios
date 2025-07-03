BGMPlay("BGM_PLACE_SHOP");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc723",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Seems like lots of customers
are coming this year...)");
    MsgClose();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("P630600001_06_000");
    MsgDisp("Himuro","Quite successful huh?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
Welcome.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,8);
    VoicePlay("P630600001_06_010");
    MsgDisp("Himuro","What's that vegetab;es?
Are you selling it?");
    MsgDisp("主人公","Yeah, the Gardening Club grew it. We
also prepared herb tea and herb cookies.▼");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P630600001_06_020");
    MsgDisp("Himuro","Hmm.
Then, I'll have some");
    MsgDisp("主人公","Thank you very much!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(6,-1);
    ChMouth(6,-1);
    ChCheek(6,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc723",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Seems like lots of customers
are coming this year...)");
    MsgClose();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("P630600001_06_030");
    MsgDisp("Himuro","...I missed the hype.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
Welcome.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P630600001_06_040");
    MsgDisp("Himuro","It's super popular.");
    MsgDisp("主人公","Yes, fortunately.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P630600001_06_050");
    MsgDisp("Himuro","Then, 
what did you do?");
    MsgDisp("主人公","Pretty much I helped grow the vegetables
we're selling around there, and made the
herb tea and cookies.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P630600001_06_060");
    MsgDisp("Himuro","Ah, I see.
Then prepare a portion for me.");
    MsgDisp("主人公","Yes.
Then please wait a bit!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(6,-1);
    ChMouth(6,-1);
    ChCheek(6,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
