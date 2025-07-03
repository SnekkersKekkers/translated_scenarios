switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,34,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("R060100003_01_000");
    MsgDisp("Kazama","｛主人公｝.
You got a present, right?");
    MsgDisp("主人公","Huh... Ah!
｛風真＊＊｝, you got the present
I brought to the party!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("R060100003_01_010");
    MsgDisp("Kazama","You received the present
I got for the party.");
    MsgDisp("主人公","Really∋");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("R060100003_01_020");
    MsgDisp("Kazama","It would have been quicker
if we just traded then.
Alright, let's open them.");
    MsgDisp("主人公","Yeah, I'm excited too!");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,34,0,0,3,10,-1,0,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("R060100003_01_030");
    MsgDisp("Kazama","Woah.
I can't believe that you got
my present.");
    MsgDisp("主人公","Huh∋　This is yours?
｛風真＊＊｝, you got the present
that I brought!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("R060100003_01_040");
    MsgDisp("Kazama","Must have been fate then, huh.");
    MsgDisp("主人公","Hehe, it is quite the coincidence!");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("R060100003_01_050");
    MsgDisp("Kazama","...Speaking of,
do you believe in fate?");
    MsgDisp("主人公","Yeah! Well then,
shall we open our gifts?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("R060100003_01_060");
    MsgDisp("Kazama","...Oh, you weren't listening.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,34,0,0,3,-1,-1,0,0);
    ChEye(1,3);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("R060100003_01_070");
    MsgDisp("Kazama","You really got my present...");
    MsgDisp("主人公","Huh...
This is your present, ｛風真＊＊｝?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("R060100003_01_080");
    MsgDisp("Kazama","Yeah. I'm a little surprised
because I was picking a present
with you in mind.");
    MsgDisp("主人公","...Ah! You got the present
I brought, ｛風真＊＊｝ ∈");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("R060100003_01_090");
    MsgDisp("Kazama","Haha, I can't help but laugh.
That's very much like us.");
    MsgDisp("主人公","Yeah, it makes me happy.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("R060100003_01_100");
    MsgDisp("Kazama","For sure.
Can I open my gift then?");
    MsgDisp("主人公","Of course!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
