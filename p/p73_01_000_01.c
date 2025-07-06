BGMStop();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("P730100001_01_000");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Did you come to watch?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100001_01_010");
    MsgDisp("Kazama","You're going to wear your dress
and walk as a model, 
How could I miss that?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("P730100001_01_020");
    MsgDisp("Kazama","Ah, I have to reserve a 
seat for the camera.");
    MsgDisp("主人公","Hehe, hey.
It's like you're at your kid's play.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100001_01_030");
    MsgDisp("Kazama","It's not like that. The dress and model
are both on par with a pro. Go with
confidence in yourself.");
    MsgDisp("主人公","Yeah, thank you. Thanks to ｛風真＊＊｝, I
gained some couragee.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100001_01_040");
    MsgDisp("Kazama","I'm glad. Well, on a sentimental level,
I'm like a parent watching their kid's
play.");
    MsgDisp("主人公","Hm?");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P730100001_01_050");
    MsgDisp("Kazama","Look at me properly
and pose, okay?");
    MsgDisp("主人公","Ehh?
Y-Yeah...!");
    MsgDisp("主人公","(｛風真＊＊｝ praised me...
Alright, let's hold our head up high!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("P730100001_01_060");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
What do you think of this dress?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100001_01_070");
    MsgDisp("Kazama","That's a foolish question.");
    MsgDisp("主人公","Eh?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100001_01_080");
    MsgDisp("Kazama","You made it, 
you're wearing it?
Whether I dislike it or not means nothing.");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P730100001_01_090");
    MsgDisp("Kazama","If I'm understating it, it's the best.
...Does that satisfy you?");
    MsgDisp("主人公","Hehe, yeah.
I'm super happy.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100001_01_100");
    MsgDisp("Kazama","With confidence, go and show the merit
of your work with your own appeal.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P730100001_01_110");
    MsgDisp("Kazama","Crap,
I have to go reserve a spot too.");
    MsgDisp("主人公","Hehe.
Yeah, I'll see you later!");
    MsgClose();
    ChClose(1,0,30);
    MsgDisp("主人公","(｛風真＊＊｝ praised me well.
Alrーight, let's do our best!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
