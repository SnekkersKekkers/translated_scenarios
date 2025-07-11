MsgDisp("主人公","｛大地＊＊｝, I guess......");
StlEyeOpenLevel(21,-1);
StlMouthOpenLevel(21,-1);
StlNear(0,0,15);
StlEyeOpenLevel(22,-1);
StlMouthOpenLevel(22,-1);
StlCheek(22,0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,3);
    StlMouth(21,0);
    VoicePlay("U130D00007_21_000");
    MsgDisp("Michiru","Hehe. Are you breaking up with Habataki
High School?");
    StlEye(21,0);
    StlEye(22,2);
    StlMouth(22,0);
    VoicePlay("U130D00007_22_000");
    MsgDisp("Hikaru","That's a good thing♪
Hikaru is rooting for you!");
    StlEye(22,0);
    VoicePlay("U130D00007_22_010");
    MsgDisp("Hikaru","Treasure the way you two met!
That was a lucky opportunity, wasn't it?");
    MsgDisp("主人公","(How we met......
I guess I should continue working at
my part-time job.)");
    break ;
    case 3:
    StlEye(21,0);
    StlEyeOpenLevel(21,0);
    StlMouth(21,0);
    StlEye(22,0);
    StlEyeOpenLevel(22,5);
    StlMouth(22,0);
    VoicePlay("U130D00007_22_020");
    MsgDisp("Hikaru","Yupyup. 
You're on good terms with the Hanegasaki
boy♪");
    StlEye(21,0);
    VoicePlay("U130D00007_21_010");
    MsgDisp("Michiru","He has a competitive spirit and
takes a lot of interest in Habataki
celebrities.");
    StlEyeOpenLevel(21,5,1);
    VoicePlay("U130D00007_21_020");
    MsgDisp("Michiru","I think Mari should show him how 
cool she is. Making a lot of friends at
school might ignite his competitive side");
    MsgDisp("主人公","(｛大地＊＊｝ is competitive, huh......If I
become friends with him, will I be able to
see every side of him?)");
    break ;
    case 4:
    case 5:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,0);
    StlEyeOpenLevel(21,0);
    StlMouth(21,0);
    VoicePlay("U130D00007_21_030");
    MsgDisp("Michiru","The Hanegasaki boy, huh?
Hmm, he's also interested in Mari.");
    StlEye(22,0);
    StlMouth(22,1);
    VoicePlay("U130D00007_22_030");
    MsgDisp("Hikaru","That's right. 
He's worried about conflict between you
two. ");
    StlEyeOpenLevel(21,5,1);
    MsgDisp("主人公","Conflict?");
    StlEyeOpenLevel(22,0,1);
    StlMouth(22,1);
    VoicePlay("U130D00007_22_040");
    MsgDisp("Hikaru","Right now Mari is the number one
thing on his mind.");
    StlEye(21,2);
    VoicePlay("U130D00007_21_040");
    MsgDisp("Michiru","It's a new challenge that's
different from before. He's setting his
sights on it......");
    MsgDisp("主人公","?");
    StlEye(21,0);
    StlEye(22,0);
    StlMouth(22,0);
    VoicePlay("U130D00007_22_050");
    MsgDisp("Hikaru","If Mari likes him too, then I 
think the key is to have the same goals.
Good luck♪");
    MsgDisp("主人公","(The same goals as 
｛大地＊＊｝......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
