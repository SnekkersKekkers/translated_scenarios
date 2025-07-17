MsgDisp("主人公","｛氷室＊＊｝, I guess...");
StlEyeOpenLevel(21,#1);
StlMouthOpenLevel(21,#1);
StlNear(0,0,15);
StlEyeOpenLevel(22,#1);
StlMouthOpenLevel(22,#1);
StlCheek(22,0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    StlEye(22,0);
    StlMouth(22,2);
    StlEye(21,0);
    StlEyeOpenLevel(21,5);
    StlMouth(21,0);
    VoicePlay("U130D00005_21_000");
    MsgDisp("Michiru","Hehe, has a younger man caught your
attention? It's true that he has a certain
charm to him.");
    StlEyeOpenLevel(22,5,1);
    StlMouth(22,1);
    VoicePlay("U130D00005_22_000");
    MsgDisp("Hikaru","There are a few things here and there.
Himuro-chan is still a baby bird. If Mari
teaches him well, he may become a fine
man♪");
    MsgDisp("主人公","(I have to teach ｛氷室＊＊｝∋
I wonder if I can do that sort of
thing...)");
    break ;
    case 3:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,0);
    StlEyeOpenLevel(21,5);
    StlMouth(21,0);
    VoicePlay("U130D00005_21_010");
    MsgDisp("Michiru","Himuro-chan seems to have taken a liking
to you?");
    MsgDisp("主人公","Eh?...");
    StlMouth(22,1);
    VoicePlay("U130D00005_22_010");
    MsgDisp("Hikaru","Himuro-chan seems to only let his guard
down for Mari.");
    StlEyeOpenLevel(22,5,1);
    StlMouth(22,0);
    VoicePlay("U130D00005_22_020");
    MsgDisp("Hikaru","You guys are still friends but it's
obvious that you're different than
everyone else in his eyes.");
    StlEyeOpenLevel(21,0,1);
    StlMouth(21,0);
    VoicePlay("U130D00005_21_020");
    MsgDisp("Michiru","And it seems like since he's met Mari,
he's mellowed out a lot, don't you think?");
    StlEye(22,2);
    StlMouth(22,0);
    VoicePlay("U130D00005_22_030");
    MsgDisp("Hikaru","Uh-huh!
Mari should continue to be friendly with
him and get rid all the thorns!");
    StlEyeOpenLevel(21,5,1);
    StlEye(22,0);
    MsgDisp("主人公","(Eehh∋
That's how the people around me
feel...?)");
    break ;
    case 4:
    case 5:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,0);
    StlEyeOpenLevel(21,0);
    StlMouth(21,0);
    VoicePlay("U130D00005_21_030");
    MsgDisp("Michiru","Hehe.
I wonder if this will make him happy.");
    MsgDisp("主人公","...Eh?");
    StlEye(22,0,0);
    StlEyeOpenLevel(22,5,1);
    StlMouth(22,0);
    StlCheek(22,7);
    VoicePlay("U130D00005_22_040");
    MsgDisp("Hikaru","Uh-huh!
In that same regard, I'd like to ask
Himuro-chan how he won Mari's heart.");
    StlEye(21,0);
    VoicePlay("U130D00005_21_040");
    MsgDisp("Michiru","Maybe Mari's innocence was able to melt
that ice wall of his.");
    StlEye(22,2);
    StlMouth(22,0);
    VoicePlay("U130D00005_22_050");
    MsgDisp("Hikaru","Mari, you really did so well▼");
    StlEyeOpenLevel(21,5,1);
    VoicePlay("U130D00005_21_050");
    MsgDisp("Michiru","It seems like he finally realized that he
doesn't have to overwork himself all the
time.");
    StlEye(22,0);
    MsgDisp("主人公","(｛氷室＊＊｝'s ice wall...
Lately I don't get that feeling from him
anymore...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
