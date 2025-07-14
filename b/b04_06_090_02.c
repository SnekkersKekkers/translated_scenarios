BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4,1);
ScrFadeIn(0);
VoicePlay("B040609002_06_000");
MsgDisp("Himuro","Plants are surprisingly deep...");
MsgSel("Are you becoming interested in plants?","You finally realized huh!","They are amazing!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040609002_06_010");
    MsgDisp("Himuro","I guess it's just one of my interests out
of many.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040609002_06_020");
        MsgDisp("Himuro","What gives you the
right to say that? ");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040609002_06_030");
        MsgDisp("Himuro","Did you find out I wasn't interested in
plants?");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040609002_06_040");
        MsgDisp("Himuro","But I'm starting to understand. When you
experience things in person, that's when
you really become interested. It's just
like that.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040609002_06_050");
        MsgDisp("Himuro","Well, it's not to the point it'll affect
my future.");
        MsgDisp("主人公","Then, why don't you try growing a cactus
or something?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040609002_06_060");
        MsgDisp("Himuro","Cactus?
Why?");
        MsgDisp("主人公","It's kind of like ｛氷室＊＊｝.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040609002_06_070");
        MsgDisp("Himuro","In what way?");
        MsgDisp("主人公","It says that it stores a lot of water and
makes beautiful flowers bloom right?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040609002_06_080");
        MsgDisp("Himuro","So that's the impression I give off...
That's good right?");
        MsgDisp("主人公","And they're prickly.");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,5);
        VoicePlay("B040609002_06_090");
        MsgDisp("Himuro","...Pfft, you've got guts.");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,0);
        VoicePlay("B040609002_06_100");
        MsgDisp("Himuro","Fine. Fore you to say all that, I'll think
about growing a cactus.");
        MsgDisp("主人公","(He really does look like a prickly
cactus...!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("B040609002_06_110");
    MsgDisp("Himuro","Why do you look so triumphant?
But, I do admit that was impressive.
Including the fact you got me interested.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
