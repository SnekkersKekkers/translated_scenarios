MsgDisp("主人公","｛風真＊＊｝, I guess...");
StlEyeOpenLevel(21,#1);
StlMouthOpenLevel(21,#1);
StlNear(0,0,15);
StlEyeOpenLevel(22,#1);
StlMouthOpenLevel(22,#1);
StlCheek(22,0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    StlEye(22,0);
    StlMouth(22,2);
    StlEye(21,0);
    StlEyeOpenLevel(21,5);
    StlMouth(21,1);
    VoicePlay("U130D00000_21_000");
    MsgDisp("Michiru","Hey, don't you two have a mutual love?");
    MsgDisp("主人公","Ehh∋");
    StlEye(22,1);
    VoicePlay("U130D00000_22_000");
    MsgDisp("Hikaru","Right?
I wonder if Kazama-kun and Mari have two
different definitions of \"love\"?");
    MsgDisp("主人公","(Is there a difference between my love and
｛風真＊＊｝'s \"love\"?
I wonder what that means...)");
    break ;
    case 3:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,0);
    StlEyeOpenLevel(21,5);
    StlMouth(21,0);
    VoicePlay("U130D00000_21_010");
    MsgDisp("Michiru","Hehe.
The amazing childhood sweethearts.");
    MsgDisp("主人公","...Eh?");
    StlEyeOpenLevel(21,0,1);
    VoicePlay("U130D00000_21_020");
    MsgDisp("Michiru","I'm sure you two like each other but there
seems to be a bit of distance.
Neither too close nor too far.");
    StlEyeOpenLevel(21,#1);
    StlEyeOpenLevel(22,5,1);
    StlMouth(22,0);
    VoicePlay("U130D00000_22_010");
    MsgDisp("Hikaru","Like the main character of a shoujo manga
that can't make up her mind!");
    StlEye(22,2);
    StlMouth(22,1);
    VoicePlay("U130D00000_22_020");
    MsgDisp("Hikaru","If Mari attacked like one of those
over-the-top heroines, Kazama-kun would
lose easily, wouldn't he?");
    StlEye(22,0);
    MsgDisp("主人公","(If I go after ｛風真＊＊｝ more
aggressively, would he notice it?)");
    break ;
    case 4:
    case 5:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,0);
    StlEyeOpenLevel(21,0);
    StlMouth(21,0);
    StlNear(1,0,15);
    VoicePlay("U130D00000_21_030");
    MsgDisp("Michiru","Hehe.");
    StlEye(22,2);
    StlCheek(22,7);
    VoicePlay("U130D00000_22_030");
    MsgDisp("Hikaru","Aha▼
No way, Mari.");
    MsgDisp("主人公","Eh, huh.
What?");
    StlEyeOpenLevel(21,5,1);
    StlMouth(21,0);
    VoicePlay("U130D00000_21_040");
    MsgDisp("Michiru","No, it's okay.
I just thought it's amusing to watch.");
    StlEye(22,1);
    StlMouth(22,1);
    StlCheek(22,5);
    VoicePlay("U130D00000_22_040");
    MsgDisp("Hikaru","Hikaru wants to push you two a bit more,
but sis will get mad if I do.");
    StlEyeOpenLevel(21,0,1);
    StlNear(0,0,15);
    VoicePlay("U130D00000_21_050");
    MsgDisp("Michiru","You can't.
Their love is good as it is.");
    StlEye(22,0);
    StlMouth(22,0);
    StlCheek(22,0);
    VoicePlay("U130D00000_22_050");
    MsgDisp("Hikaru","That's how it is.
Ok, Hikaru will keep watching over you
two▼");
    StlEyeOpenLevel(21,5,1);
    MsgDisp("主人公","(?
Does that mean you two support me?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
