BGOpen("bh510",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B040530002_05_000");
MsgDisp("Hiiragi","What is the matter?
Is there something bothering you?");
MsgSel("There's a lot of dust accumulated?","Do the troupe members do the cleaning?","It's been cleaned well.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("B040530002_05_010");
    MsgDisp("Hiiragi","That's true.
I'll use a lint roller.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040530002_05_020");
        MsgDisp("Hiiragi","Why would there be?
I do it myself.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040530002_05_030");
        MsgDisp("Hiiragi","No no.
It would be a waste for someone 
to do the cleaning.");
        MsgDisp("主人公","A waste?");
        ChEye(5,4);
        VoicePlay("B040530002_05_040");
        MsgDisp("Hiiragi","Yes, I like cleaning.");
        MsgDisp("主人公","...I have to follow your example.");
        ChEye(5,2);
        ChMotion(5,0);
        VoicePlay("B040530002_05_050");
        MsgDisp("Hiiragi","It's not that impressive.");
        MsgDisp("主人公","Eh?");
        ChEye(5,4);
        VoicePlay("B040530002_05_060");
        MsgDisp("Hiiragi","I'm not as tidy as you might think.");
        MsgDisp("主人公","But, it's so nicely organized?");
        ChEye(5,3);
        ChMotion(5,4);
        VoicePlay("B040530002_05_070");
        MsgDisp("Hiiragi","Yes, that's it. I like tidying up,
especially when things are really messy.");
        MsgDisp("主人公","Hehe, that's right.");
        ChEye(5,2);
        ChMotion(5,1);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040530002_05_080");
        MsgDisp("Hiiragi","Yes, 
As reality is filled with problems 
you cannot tidy away...");
        ChEye(5,3);
        ChMotion(5,0);
        VoicePlay("B040530002_05_090");
        MsgDisp("Hiiragi","The more you clean,
the tidier it becomes.
It feels really good.");
        MsgDisp("主人公","Umm, are you talking
about the theater troupe?");
        ChEye(5,0);
        ChMotion(5,4);
        VoicePlay("B040530002_05_100");
        MsgDisp("Hiiragi","Partly, but there's also something else
lately, a special presence I 
have no idea how to handle.");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040530002_05_110");
        MsgDisp("Hiiragi","...It's you.");
        MsgDisp("主人公","Eh, me?
Getting tidied away?");
        ChEye(5,3);
        ChMotion(5,3);
        VoicePlay("B040530002_05_120");
        MsgDisp("Hiiragi","Is that it? You truly are an interesting
and wonderful person. I don't think you
can simply be put away with a lint roller.");
        MsgDisp("主人公","A lint roller?");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040530002_05_130");
        MsgDisp("Hiiragi","A day will come where I'll have to settle
things with you properly. Until then, I'll
keep working hard.");
        MsgDisp("主人公","(Settle things?
What is he planning to do with me...?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("B040530002_05_140");
    MsgDisp("Hiiragi","Yes, there are all sorts of cleaning
supplies here. But since I'm not usually
here in the first place, the room doesn't
get dirty.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
