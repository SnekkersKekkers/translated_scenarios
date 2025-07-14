MsgDisp("主人公","｛颯砂＊＊｝, I guess......");
StlEyeOpenLevel(21,#1);
StlMouthOpenLevel(21,#1);
StlNear(0,0,15);
StlEyeOpenLevel(22,#1);
StlMouthOpenLevel(22,#1);
StlCheek(22,0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    StlEye(22,0);
    StlMouth(22,2);
    StlEye(21,0);
    StlEyeOpenLevel(21,5);
    StlMouth(21,0);
    VoicePlay("U130D00001_21_000");
    MsgDisp("Michiru","Hmm. It seems like he's interested in
romance.");
    StlEyeOpenLevel(22,5,1);
    StlMouth(22,0);
    VoicePlay("U130D00001_22_000");
    MsgDisp("Hikaru","It seems like he's more in love with track
and field.
Mari, you need to be more aggressive!");
    MsgDisp("主人公","(He loves track and field......
Maybe I should take note of that.)");
    break ;
    case 3:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,3);
    StlMouth(21,0);
    VoicePlay("U130D00001_21_010");
    MsgDisp("Michiru","Hehe.
He looks at Mari differently lately.");
    MsgDisp("主人公","Eh, he does?");
    StlEye(21,0);
    VoicePlay("U130D00001_21_020");
    MsgDisp("Michiru","Yes. He always looks so serious about his
beloved track and field. But with Mari, he
has a gentle gaze.");
    StlEye(22,2);
    StlMouth(22,0);
    VoicePlay("U130D00001_22_010");
    MsgDisp("Hikaru","I know, right!
Like he's watching a puppy♪");
    MsgDisp("主人公","Eh, I'm a puppy?∋");
    StlEye(22,0);
    StlMouth(22,1);
    VoicePlay("U130D00001_22_020");
    MsgDisp("Hikaru","Ah, maybe I should've worded it
differently. Let's see... It feels like
he's looking tenderly at something cute?");
    MsgDisp("主人公","(｛颯砂＊＊｝ is looking at me tenderly.
I think I'm happy...)");
    break ;
    case 4:
    case 5:
    StlEye(21,0);
    StlMouth(21,0);
    StlEye(22,2);
    StlMouth(22,1);
    StlCheek(22,7);
    VoicePlay("U130D00001_22_030");
    MsgDisp("Hikaru","So Sassa-kun is Mari's prisoner♪");
    MsgDisp("主人公","Eh......");
    StlEye(22,0);
    StlCheek(22,5);
    StlEyeOpenLevel(21,5,1);
    VoicePlay("U130D00001_21_030");
    MsgDisp("Michiru","Hehe. But he's quite pure and doesn't know
how to act towards Mari.");
    StlEye(22,0,0);
    StlEyeOpenLevel(22,5,1);
    StlMouth(22,0);
    StlCheek(22,0);
    VoicePlay("U130D00001_22_040");
    MsgDisp("Hikaru","He's a rare type of boy these days Where
did that brave star of track and field
go∋");
    StlEyeOpenLevel(21,0,1);
    VoicePlay("U130D00001_21_040");
    MsgDisp("Michiru","Isn't that because he's thinking carefully
about how he should treat and cherish Mari");
    StlEyeOpenLevel(21,5,1);
    StlEye(22,1,0);
    StlEyeOpenLevel(22,0,1);
    StlMouth(22,2);
    VoicePlay("U130D00001_22_050");
    MsgDisp("Hikaru","Geez......
He acts like a dad!");
    StlEyeOpenLevel(22,5,1);
    MsgDisp("主人公","(Like a dad, huh......
It's true, when I'm with ｛颯砂＊＊｝ I
feel at ease.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
