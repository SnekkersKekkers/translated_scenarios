switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("L040700005_07_000");
    MsgDisp("Mikage","It's handmade.");
    MsgDisp("主人公","Yes, what about it?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700005_07_010");
    MsgDisp("Mikage","Ooh, it's pretty well made.
You did your best, huh.");
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("L040700005_07_020");
    MsgDisp("Mikage","Sneaking in something that I don't like is
just like you, and I like that, you know?");
    MsgDisp("主人公","(Huh...?
Was it not to
｛御影＊＊｝ 's tastes?)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 3:
    ChEye(7,1);
    ChMouth(7,4);
    ChMotion(7,1);
    VoicePlay("L040700005_07_030");
    MsgDisp("Mikage","Ooh, handmade... right?");
    MsgDisp("主人公","Um, yes.
Is something wrong?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700005_07_040");
    MsgDisp("Mikage","You thought hard to choose this topping,
right?");
    MsgDisp("主人公","Yes.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("L040700005_07_050");
    MsgDisp("Mikage","Then it's okay!
I'll accept gratefully.");
    MsgDisp("主人公","(Ah, could it be... I added something
｛御影＊＊｝ doesn't
like...?)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 4:
    case 5:
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("L040700005_07_060");
    MsgDisp("Mikage","It's handmade, amazing.
You added a lot～");
    MsgDisp("主人公","Yes.
How is it?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("L040700005_07_070");
    MsgDisp("Mikage","It's good.
You considered a lot while making it,
right?");
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700005_07_080");
    MsgDisp("Mikage","It is interesting that you're trying to
tease me with this, though.");
    MsgDisp("主人公","Huh?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("L040700005_07_090");
    MsgDisp("Mikage","Like adding salt to a watermelon to make
it sweeter?
Or maybe you're just having fun with me.");
    MsgDisp("主人公","(Salt? Having fun? ...Ah! Could it be that
I added something he doesn't like?)");
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
