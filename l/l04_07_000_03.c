switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700003_07_000");
    MsgDisp("Mikage","Amazing, this is handmade, right?");
    MsgDisp("主人公","Yes, I did my best.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("L040700003_07_010");
    MsgDisp("Mikage","It looks delicious, and more than that,
I can see the feelings of the person who
made it. Thanks.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,4);
    VoicePlay("L040700003_07_020");
    MsgDisp("Mikage","Guess I'll have to display this
for a while～!");
    MsgDisp("主人公","(Thank goodness.
He seemed really happy!)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700003_07_030");
    MsgDisp("Mikage","Wow, you're pretty good
at making these, huh～?");
    MsgDisp("主人公","You knew it was handmade?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("L040700003_07_040");
    MsgDisp("Mikage","Yeah, thanks.
I can just see you making it.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("L040700003_07_050");
    MsgDisp("Mikage","You thought about my taste, too.
Don't make me cry too much.");
    MsgDisp("主人公","(He seemed really happy.
Thank goodness!)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,3);
    VoicePlay("L040700003_07_060");
    MsgDisp("Mikage","Hey hey, this is pretty amazing.");
    MsgDisp("主人公","Um, I tried to make it myself.
How is it?");
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("L040700003_07_070");
    MsgDisp("Mikage","It's not just how it is.
I can't imagine a better chocolate
than this.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("L040700003_07_080");
    MsgDisp("Mikage","And it's handmade, right?");
    MsgDisp("主人公","Yes, I did my best.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("L040700003_07_090");
    MsgDisp("Mikage","I really like making things myself,
too, so I'm happy about this.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("L040700003_07_100");
    MsgDisp("Mikage","Ohー, there's even that topping
I like......
You're a good person.");
    MsgDisp("主人公","It's making me a little shy,
being praised this much.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("L040700003_07_110");
    MsgDisp("Mikage","Thanks.");
    MsgDisp("主人公","(Thank goodness!
He seemed really happy.)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
