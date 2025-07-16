BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040521202_05_000");
MsgDisp("Hiiragi","I wonder if Habataki Theatre Troupe would
be happy if we could set up a store like
this");
MsgSel("Habataki Theater Manju would be perfect!","You should sell those fox plushies","I want a Yanosuke t-shirt.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("B040521202_05_010");
    MsgDisp("Hiiragi","Let's be particular about the bean paste.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040521202_05_020");
    MsgDisp("Hiiragi","Hehe, yes.
I'll talk it over with the zoo.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040521202_05_030");
        MsgDisp("Hiiragi","Actually, when we were touring around the
country... we did sell that.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMotion(5,0);
        VoicePlay("B040521202_05_040");
        MsgDisp("Hiiragi","Actually, when we were touring around the
country... we did sell that.");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040521202_05_050");
        MsgDisp("Hiiragi","When I was younger I would at least
question \"Why is my face on someone else's
clothes?\"...");
        ChMotion(5,4);
        VoicePlay("B040521202_05_060");
        MsgDisp("Hiiragi","It was tough for me around elementary
school age.");
        MsgDisp("主人公","Is that so?
I'm sorry.
I had no idea...");
        ChMotion(5,0);
        VoicePlay("B040521202_05_070");
        MsgDisp("Hiiragi","There is no need for you to apologize.
And that kind of thing is also part of
business.");
        ChEye(5,0);
        ChMotion(5,4);
        VoicePlay("B040521202_05_080");
        MsgDisp("Hiiragi","Now I have the honour of performing as
part of a citizens' theatre troupe.
There's no need to have a t-shirt with my
face on it right?");
        MsgDisp("主人公","... That's right...");
        ChEye(5,3);
        ChMotion(5,0);
        VoicePlay("B040521202_05_090");
        MsgDisp("Hiiragi","Were you imagining it just now?
A Yanosuke T-shirt.");
        MsgDisp("主人公","Ah, I was just thinking what it would be
like...");
        ChMotion(5,4);
        VoicePlay("B040521202_05_100");
        MsgDisp("Hiiragi","You really are...
That's fine, I shall show you.");
        MsgDisp("主人公","Eh?
There really is?");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040521202_05_110");
        MsgDisp("Hiiragi","There are a lot of printing services like
that, is there not?");
        VoicePlay("B040521202_05_120");
        MsgDisp("Hiiragi","I'd like to make a t-shirt of me and you.");
        MsgDisp("主人公","Umm, that can't be sold though.");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("B040521202_05_130");
        MsgDisp("Hiiragi","Who would buy that?
That would be an interesting person.");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040521202_05_140");
        MsgDisp("Hiiragi","It'll only be my prized possession.
In that case, would it be okay?");
        MsgDisp("主人公","(A t-shirt with the two of us?
... It's embarrassing, but it might be
interesting?)");
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
