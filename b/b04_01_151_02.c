BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040115102_01_000");
MsgDisp("Kazama","Hey, look at that.
If you get a perfect score, you'll
get a travel voucher as a coupon∋
Seriously?");
MsgSel("Something like that is definitely impossible","A meal voucher would be better","Perfect they say?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040115102_01_010");
    MsgDisp("Kazama","Hey, what happened to your usual courage?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040115102_01_020");
        MsgDisp("Kazama","There it is...geez.
You're greedy.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040115102_01_030");
        MsgDisp("Kazama","...Geez, you're a big eater.
A travel voucher is better right?");
        MsgDisp("主人公","But, if we got a meal voucher, 
we could eat together after this?");
        ChEye(1,0);
        ChMouth(1,0);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040115102_01_040");
        MsgDisp("Kazama","...I see, that's true.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,2);
        ChEyeOpenLevel(1,0);
        ChCheek(1,5);
        VoicePlay("B040115102_01_050");
        MsgDisp("Kazama","A fancy dinner in the 
waterfront area...");
        MsgDisp("主人公","Hehe, ｛風真＊＊｝ is 
also a gourmand, isn't he?");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        ChCheek(1,0);
        VoicePlay("B040115102_01_060");
        MsgDisp("Kazama","Ha? Don't lump me in with you.
When it's about food, 
anything is fine for me.");
        MsgDisp("主人公","Eh? Then what?");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040115102_01_070");
        MsgDisp("Kazama","...Drop it.
A fancy dinner is fine.");
        MsgDisp("主人公","((｛風真＊＊｝,
Even if you didn't get a perfect score, 
the prize is a travel voucher?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040115102_01_080");
    MsgDisp("Kazama","It's alright, don't worry.
It's got nothing to do with you.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
