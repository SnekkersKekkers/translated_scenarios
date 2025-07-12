BGMPlay("BGM_PLACE_SHOP");
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc724",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing an organic cafe.
It's a culmination of my efforts
in the Gardening Club...)");
    MsgClose();
    ChOpen(2,254,2,0,4,#1,#1,0,0);
    VoicePlay("P630200002_02_000");
    MsgDisp("Sassa","Amazing.
You were able to do a legit cafe.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Welcome～!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P630200002_02_010");
    MsgDisp("Sassa","The Gardening Club is amazing, huh.
They even made a shop.");
    MsgDisp("主人公","Yes, we received Mikage-sensei's help, 
and did our best.");
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("P630200002_02_020");
    MsgDisp("Sassa","Even judging by the atmosphere,
it already seems delicious.");
    ChEye(2,0);
    ChEyeOpenLevel(2,10);
    MsgDisp("主人公","Hehe.
This year, I reccomend the organic
vegetable salad.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P630200002_02_030");
    MsgDisp("Sassa","Then, I'll have that.");
    MsgDisp("主人公","Certainly!
Then, I'll lead you to your seat.");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(2,#1);
    ChMouth(2,#1);
    ChCheek(2,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc724",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing an organic cafe.
It's a culmination of my efforts
in the Gardening Club...)");
    MsgClose();
    ChOpen(2,254,2,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P630200002_02_040");
    MsgDisp("Sassa","｛主人公｝, I heard that the Horticulture 
club was impressive this year, 
but it's more than the rumours say.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝, thank you.
Everyone gav eit their best.
It's a wonderful shop, huh?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P630200002_02_050");
    MsgDisp("Sassa","Yeah.
It's doesn't look like school.
The menu also looks promising.");
MsgDisp("主人公","This year we're not just selling
vegetables, the shop is offering salad for
you to enjoy.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P630200002_02_060");
    MsgDisp("Sassa","Then, I want a salad of vegetables you
grew.");
    MsgDisp("主人公","Everyone grew them, So if you request just
mine, it's a bit hard to do.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("P630200002_02_070");
    MsgDisp("Sassa","I see...ah, but But if it's the ones
you're selling directly, you'll know which
vegetables you grew?");
    MsgDisp("主人公","Yeah. Because the grower's comments are
written on the bag.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("P630200002_02_080");
    MsgDisp("Sassa","Alright. Then, I'll buy some of your
vegetables first, Before they're sold out.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝!
Why don't you order firs——");
    VoicePlay("P630200002_02_090");
    MsgDisp("Sassa","One of your signature!");
    MsgDisp("主人公","Yeess. Certainly!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChOpen(2,254,0,0,0,#1,#1,0,0,0,0);
