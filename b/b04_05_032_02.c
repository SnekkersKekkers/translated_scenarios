BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040503202_05_000");
MsgDisp("Hiiragi","The light passing through
the tube tank is beautiful.
This is a sun and water garden.");
MsgSel("Sun・and・Water Garden!","If people could enter the tube, it would become popular.","It's like we're in the south sea huh");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,0);
    ChMotion(5,3);
    VoicePlay("B040503202_05_010");
    MsgDisp("Hiiragi","Yes, that's right.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,4);
        VoicePlay("B040503202_05_020");
        MsgDisp("Hiiragi","I'll watch you swim from below.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040503202_05_030");
        MsgDisp("Hiiragi","Are you trying to make me laugh?");
        MsgDisp("主人公","Umm... I'm sorry
Was that dull?");
        ChEye(5,2);
        ChMotion(5,4);
        VoicePlay("B040503202_05_040");
        MsgDisp("Hiiragi","I see... I'm the one who should say that,
sorry. I made you take my needs into
consideration.");
        ChMouth(5,2);
        ChMotion(5,2);
        VoicePlay("B040503202_05_050");
        MsgDisp("Hiiragi","Properly speaking, 
Even though I'm the one who should
be making sure you're having fun,
it's pathetic of me.");
        MsgDisp("主人公","No, I'm always having fun.");
        ChEye(5,0);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("B040503202_05_060");
        MsgDisp("Hiiragi","I'm sorry.
I'll be the one entering the tube 
and swimming. In order to rid
myself of my dullness.");
        MsgDisp("主人公","Umm, the thing about entering a tube
was a joke, so it's not doable?");
        ChEye(5,3);
        ChMotion(5,4);
        VoicePlay("B040503202_05_070");
        MsgDisp("Hiiragi","Hey, how clueless do you think I am? I
won't go in, I don't have my swimsuit with
me today.");
        MsgDisp("主人公","Hehe, come on.");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040503202_05_080");
        MsgDisp("Hiiragi","You finally smiled.
This is somewhat nice.
When the person you like
laughs at your words.");
        MsgDisp("主人公","...Eh?");
        ChEye(5,3);
        VoicePlay("B040503202_05_090");
        MsgDisp("Hiiragi","I could grow accustomed to this.
From now on, prepare yourself, okay?");
        MsgDisp("主人公","(｛柊＊＊＊｝...
Just now, did you say \"Person you like\"?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("B040503202_05_100");
    MsgDisp("Hiiragi","Speaking of the south, it is southern in a
way. The penguins here are apparently from
areas around Antarctica.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
