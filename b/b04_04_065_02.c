MsgClose();
EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,33,0,4,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040406502_04_000");
MsgDisp("Nanatsumori","...I feel like the fireworks this year are
more beautiful than usual this year.");
MsgSel("Is it because it's our last fireworks of our high school life?","Yeah, I think that too.","Aren't they the same as usual?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040406502_04_010");
    MsgDisp("Nanatsumori","I see, maybe that's it.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040406502_04_020");
    MsgDisp("Nanatsumori","Right.
I watched it with you three times in a
row, I wonder if I was cast under a spell.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040406502_04_030");
        MsgDisp("Nanatsumori","It's ruined now....");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040406502_04_040");
        MsgDisp("Nanatsumori","... The same huh?
I wonder if I'm seeing it with rose-tinted
glasses.");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040406502_04_050");
        MsgDisp("Nanatsumori","In the limited three years of high school,
I watched the same fireworks with the same
person, three years in a row.");
        VoicePlay("B040406502_04_060");
        MsgDisp("Nanatsumori","I would've never believed it if you told
me that years ago.");
        MsgDisp("主人公","Is that so?");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("B040406502_04_070");
        MsgDisp("Nanatsumori","Yeah.
You've helped me grow a lot.");
        MsgDisp("主人公","Me?");
        ChMotion(4,1,1);
        VoicePlay("B040406502_04_080");
        MsgDisp("Nanatsumori","Right.");
        ChEye(4,4);
        ChMouth(4,3);
        ChCheek(4,5);
        VoicePlay("B040406502_04_090");
        MsgDisp("Nanatsumori","... Hey, do you think I've changed?
From the time we met to now.");
        MsgDisp("主人公","That's right.
When I met ｛七ツ森＊｝...
I felt like he was a bit scary.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040406502_04_100");
        MsgDisp("Nanatsumori","Yeah.
I was on edge every single day, and kept
my distance from people at school.");
        ChEye(4,0);
        ChMouth(4,4);
        ChCheek(4,8);
        VoicePlay("B040406502_04_110");
        MsgDisp("Nanatsumori","If I had stayed the same as I was, I think
I would have had a super dull high school
life.");
        MsgDisp("主人公","I see.");
        ChEye(4,4);
        VoicePlay("B040406502_04_120");
        MsgDisp("Nanatsumori","But, I changed.
Because, you were always by my side and
giving me encouragement.");
        ChEye(4,2);
        ChMotion(4,0,1);
        VoicePlay("B040406502_04_130");
        MsgDisp("Nanatsumori","You were the one who taught me that I
didn't have to force myself to shut myself
away. That's why——");
        ChEye(4,4);
        SEPlay("EV_SE_022");
        Wait(30,0);
        MsgDisp("主人公","Waa... those are some huge fireworks!
They're pretty, right?");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        ChCheek(4,10);
        VoicePlay("B040406502_04_140");
        MsgDisp("Nanatsumori","Yeah.
It truly is beautiful.");
        SEStop("EV_SE_022");
        MsgDisp("主人公","(｛七ツ森＊｝...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
