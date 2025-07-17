MsgDisp("主人公","｛七ツ森＊｝, I
guess...");
StlEyeOpenLevel(21,#1);
StlMouthOpenLevel(21,#1);
StlNear(0,0,15);
StlEyeOpenLevel(22,#1);
StlMouthOpenLevel(22,#1);
StlCheek(22,0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    StlEye(22,0);
    StlMouth(22,2);
    StlEye(21,0);
    StlMouth(21,1);
    VoicePlay("U130D00003_21_000");
    MsgDisp("Michiru","Minoru-kun?");
    StlEyeOpenLevel(22,5,1);
    StlMouth(22,0);
    VoicePlay("U130D00003_22_000");
    MsgDisp("Hikaru","Heh～! Minoru-kun is a bit hard to deal
with, isn't he? Mari, don't give up!");
    StlEyeOpenLevel(21,5,1);
    StlMouth(21,0);
    VoicePlay("U130D00003_21_010");
    MsgDisp("Michiru","He may seem to be unfriendly but deep
down, he's a really kind person.");
    MsgDisp("主人公","(Yeah, I guess I need to be patient...)");
    break ;
    case 3:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,0);
    StlEyeOpenLevel(21,5);
    StlMouth(21,0);
    VoicePlay("U130D00003_21_020");
    MsgDisp("Michiru","Recently, it feels like Minoru-kun is
changing.");
    VoicePlay("U130D00003_22_010");
    MsgDisp("Hikaru","Uh-huh, right now it's the biggest gossip
in the modeling scene!");
    MsgDisp("主人公","Really?");
    StlEye(21,0);
    VoicePlay("U130D00003_21_030");
    MsgDisp("Michiru","I get a much different impression of him
now than when he first started modeling.
Did Mari cause that?");
    StlEye(22,2);
    VoicePlay("U130D00003_22_020");
    MsgDisp("Hikaru","Aha▼ Minoru-kun isn't as strong-willed as
he lets on. Fight for it, Mari!");
    StlEye(22,0);
    MsgDisp("主人公","(Did I influence
｛七ツ森＊｝? I hope it
was a change in the right direction...)");
    break ;
    case 4:
    case 5:
    StlEye(21,0);
    StlEyeOpenLevel(21,5);
    StlMouth(21,0);
    StlEye(22,2);
    StlMouth(22,0);
    StlCheek(22,7);
    VoicePlay("U130D00003_22_030");
    MsgDisp("Hikaru","Uh-huh.
You've been getting along well with
Minoru-kun lately, haven't you");
    MsgDisp("主人公","Have I?");
    StlEyeOpenLevel(21,#1);
    VoicePlay("U130D00003_21_040");
    MsgDisp("Michiru","Aahh...
At school it can be hard to tell behind
those glasses he wears.");
    StlEye(22,0);
    StlMouth(22,1);
    StlCheek(22,5);
    VoicePlay("U130D00003_22_040");
    MsgDisp("Hikaru","At work, he's been taking initiative and
has become more friendly with the staff.");
    StlEye(22,2);
    StlMouth(22,0);
    StlCheek(22,7);
    VoicePlay("U130D00003_22_050");
    MsgDisp("Hikaru","You know, and when the staff make comments
about his girlfriend, he starts blushing!
Super cute～♪");
    MsgDisp("主人公","｛七ツ森＊｝ is?
That's hard to believe...");
    StlEye(22,0);
    StlCheek(22,0);
    StlEye(21,0,0);
    StlEyeOpenLevel(21,5,1);
    StlMouth(21,0);
    VoicePlay("U130D00003_21_050");
    MsgDisp("Michiru","Thanks to Mari, I feel like he's been
reborn in a sense.
In a good way, of course.");
    MsgDisp("主人公","(I see.
But what in the world did I do to help
｛七ツ森＊｝? )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
