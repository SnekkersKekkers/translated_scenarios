BGOpen("ne210",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040314002_03_000");
MsgDisp("Honda","Bands are great huh?");
MsgSel("Shall we form one together?","｛本多＊＊｝ might be suited for vocals","｛本多＊＊｝ might be suited for solo work");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040314002_03_010");
    MsgDisp("Honda","Yep yep, you'll be vocals!
I'll be on drums.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040314002_03_020");
    MsgDisp("Honda","Is that right?
Being an MC for the breaks in between the
songs would be good too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,5);
        VoicePlay("B040314002_03_030");
        MsgDisp("Honda","Ehー, that's harsh.
I'm not really good at acting as a group
though.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040314002_03_040");
        MsgDisp("Honda","Is that so?
A long time ago, my family used to have a
band.");
        MsgDisp("主人公","Family band?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040314002_03_050");
        MsgDisp("Honda","Right right. My sister played the piano,
my mum the guitar, my dad played the bass,
and I, was on the drums.");
        MsgDisp("主人公","Ehhh, seems fun!");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040314002_03_060");
        MsgDisp("Honda","Yep yep.
But, my sister stopped going to piano
lessons, so it died out naturally.");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040314002_03_070");
        MsgDisp("Honda","But, I quite enjoyed it.");
        MsgDisp("主人公","I see.
Maybe your sister got bored of it?");
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,1);
        VoicePlay("B040314002_03_080");
        MsgDisp("Honda","That's right, my sister's interests change
quickly, and by the time I finish my
research and analysis, she's already bored
of me.");
        ChSet(3,4);
        VoicePlay("B040314002_03_090");
        MsgDisp("Honda","... What about you?
Aren't you bored of me yet?");
        MsgDisp("主人公","Not at all.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040314002_03_100");
        MsgDisp("Honda","Phew, I'm glad!
I was worried.");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040314002_03_110");
        MsgDisp("Honda","About you saying that you were already
bored of me....");
        MsgDisp("主人公","｛本多＊＊｝ is always teaching
me lots of different things, I couldn't
think such a thing?");
        ChMouth(3,4);
        VoicePlay("B040314002_03_120");
        MsgDisp("Honda","Always?");
        MsgDisp("主人公","Yeah, always.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040314002_03_130");
        MsgDisp("Honda","Always, huh? ー.
Forever with you huh? ー.
Yeah, this is the best!");
        MsgDisp("主人公","(...
Hm?
Is he happy with some other meaning?)");
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
