switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S060200001_02_000");
    MsgDisp("Sassa","Oh, that's nice.
It really has a New Year's feeling.");
    MsgDisp("主人公","I'm relieved.
Do you like it?");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("S060200001_02_010");
    MsgDisp("Sassa","Yeah, I was looking forward to it.");
    MsgDisp("主人公","Yay!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S060200001_02_020");
    MsgDisp("Sassa","You look good like this.
And you're going to be at my side today in
this outfit?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S060200001_02_030");
    MsgDisp("Sassa","I have no words.");
    MsgDisp("主人公","(Yes!
｛颯砂＊＊｝ seems to like it.)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S060200001_02_040");
    MsgDisp("Sassa","This right here.
Like I thought, it's the perfect thing to
wear on New Years.");
    MsgDisp("主人公","Really?
Did I live up to your expectations?");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("S060200001_02_050");
    MsgDisp("Sassa","Yeah, it looks amazing on you.
I wish I could see you in kimono all the
time.");
    MsgDisp("主人公","Hehe!
I'm happy- but that sounds like it would
be difficult?");
    MsgDisp("主人公","(He seems to be really happy.
I'm glad I wore a kimono!)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S060200001_02_060");
    MsgDisp("Sassa","Yeah, a kimono...
That suits you well.");
    MsgDisp("主人公","Really?
Thank you.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("S060200001_02_070");
    MsgDisp("Sassa","Isn't that difficult to put on?");
    MsgDisp("主人公","It's New Years, so I tried my best.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("S060200001_02_080");
    MsgDisp("Sassa","All for me?");
    MsgDisp("主人公","Yeah, for our shrine visit.
｛颯砂＊＊｝ seemed like he was
looking forward to it.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("S060200001_02_090");
    MsgDisp("Sassa","Yeah, to be honest, I had high
expectations. But this is even better than
what I was expecting!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    ChCheek(2,10);
    VoicePlay("S060200001_02_100");
    MsgDisp("Sassa","Yeah...
Wow, so beautiful...");
    MsgDisp("主人公","(Yes!
I'm happy that ｛颯砂＊＊｝ likes
it!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
