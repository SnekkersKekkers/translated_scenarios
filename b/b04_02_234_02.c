BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,1,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223402_02_000");
MsgDisp("Sassa","Alright!
I managed to endure it today.");
MsgSel("It's because I went easy on you","Next is step two right?","Then, let's go again!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040223402_02_010");
        MsgDisp("Sassa","Yeah right, you were spinning it for your
life.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040223402_02_020");
        MsgDisp("Sassa","Yeah yeah,
I thank you for your kindness.");
        MsgDisp("主人公","Hehe, good.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,3);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040223402_02_030");
        MsgDisp("Sassa","Hey, don't get too carried away. ");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040223402_02_040");
        MsgDisp("Sassa","But, I have experience with throwing
pitches with the centrifrucal force, but
this was a different level.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040223402_02_050");
        MsgDisp("Sassa","But you might have the skills of an 
astronaut or fighter pilot.");
        MsgDisp("主人公","Ehh?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040223402_02_060");
        MsgDisp("Sassa","Or...
You're just simple minded?");
        MsgDisp("主人公","Hey...");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        ChCheek(2,10);
        VoicePlay("B040223402_02_070");
        MsgDisp("Sassa","But whether it's the former or latter, 
I like both versions of you.");
        MsgDisp("主人公","The astronaut me...?");
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,3);
        ChEyeOpenLevel(2,0);
        ChCheek(2,0);
        VoicePlay("B040223402_02_080");
        MsgDisp("Sassa","Wai-...Oi, 
you're getting caught up in that.
What do you think of me liking you?");
        MsgDisp("主人公","Yeah, I'm happy.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,0);
        VoicePlay("B040223402_02_090");
        MsgDisp("Sassa","Yeah.
I'm glad that you're pleased with it.
I'll get better at spinning 
and come back again.");
        MsgDisp("主人公","(Hehe, ｛颯砂＊＊｝ said that he likes me!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("B040223402_02_100");
    MsgDisp("Sassa","Is there still more...?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,5);
    VoicePlay("B040223402_02_110");
    MsgDisp("Sassa","Hold on a minute.
At least, give me a break.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
