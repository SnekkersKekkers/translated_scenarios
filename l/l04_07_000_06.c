switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("L040700006_07_000");
    MsgDisp("Mikage","Hey, don't scare me with chocolate, okay?");
    MsgDisp("主人公","I'm sorry...
I tried to put my all into it, but...");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("L040700006_07_010");
    MsgDisp("Mikage","It's good to challenge yourself.
But, food is valuable, too.");
    MsgDisp("主人公","Yes...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700006_07_020");
    MsgDisp("Mikage","Having said that, thanks.
I'm happy about your feelings.");
    MsgDisp("主人公","(Ugh...
I wish it came out better...)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 3:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("L040700006_07_030");
    MsgDisp("Mikage","You made these yourself?
... Damn, don't push yourself too hard.");
    MsgDisp("主人公","I'm sorry...
I tried to put my feelings into them...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700006_07_040");
    MsgDisp("Mikage","I see, I can feel your feelings in this.
Like lava that's beginning to harden,
right?");
    MsgDisp("主人公","I'm sorry...");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("L040700006_07_050");
    MsgDisp("Mikage","Sorry, sorry.
You did make it just for me.
That's good enough, thanks.");
    MsgDisp("主人公","(Ugh...
I wish it came out better...)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 4:
    case 5:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700006_07_060");
    MsgDisp("Mikage","This is...");
    MsgDisp("主人公","I'm sorry...
I wanted to put my feelings in, but...");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("L040700006_07_070");
    MsgDisp("Mikage","I see, your feelings.
I know your feelings aren't just
half-hearted.");
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("L040700006_07_080");
    MsgDisp("Mikage","I'll make sure to prepare myself, and eat
this.
Thanks.");
    MsgDisp("主人公","｛御影＊＊｝, you don't
have to force yourself to eat it...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("L040700006_07_090");
    MsgDisp("Mikage","What are you talking about?
I'll make sure to accept your feelings in
my stomach.");
    MsgDisp("主人公","(Aah, I wish I had made them better...
I feel bad for
｛御影＊＊｝... )");
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
