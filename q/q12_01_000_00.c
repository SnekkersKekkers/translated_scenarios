BGOpen("sc810",0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    MsgDisp("主人公","I guess the school trip is over
tomorrow......");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("Q120100000_01_000");
    MsgDisp("Kazama","That was quick.
Any regrets?");
    MsgDisp("主人公","Nope.
Thanks to you, ｛風真＊＊｝ 
It became a good memory.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("Q120100000_01_010");
    MsgDisp("Kazama","Good for you.
Tomorrow is the last day, and you're 
exhausted, so get some rest, okay?");
    MsgDisp("主人公","I'm fine now, okay?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q120100000_01_020");
    MsgDisp("Kazama","I wonder?
Well, see you later.");
    break ;
    case 3:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    MsgDisp("主人公","I guess the school trip is over
tomorrow...... It was so quick.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q120100000_01_030");
    MsgDisp("Kazama","Yes.
But it was fun thanks to you.");
    MsgDisp("主人公","Yeah, me too!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("Q120100000_01_040");
    MsgDisp("Kazama","Looks like there's more to see here.");
    MsgDisp("主人公","I hope we can come back together again.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q120100000_01_050");
    MsgDisp("Kazama","Right.
......Though that's up to you.");
    MsgDisp("主人公","(It would be wonderful if we could
really come together sometime......)");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    MsgDisp("主人公","The school trip will be over tomorrow.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q120100000_01_060");
    MsgDisp("Kazama","Yeah.
I've never done anything like this 
before, it was fun. Thanks.");
    MsgDisp("主人公","Me too.
It was a lot of fun!");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("Q120100000_01_070");
    MsgDisp("Kazama","......You know, I hope I got to enjoy it 
even for my elementary and junior high 
school. ");
    MsgDisp("主人公","Yeah, surely!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("Q120100000_01_080");
    MsgDisp("Kazama","If you say so, I'm sure.
......Haah, I wish I could tell my past 
self.");
    MsgDisp("主人公","Huh, tell what?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q120100000_01_090");
    MsgDisp("Kazama","When I'm in high school,
I can go on the best school trip with 
you.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("Q120100000_01_100");
    MsgDisp("Kazama","Then I could wait a little easier.");
    ChEyeOpenLevel(1,-1);
    MsgDisp("主人公","Yeah......");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q120100000_01_110");
    MsgDisp("Kazama","Come on, don't look like that.
It's a fun school trip, right?");
    MsgDisp("主人公","Yeah, it still hasn't ended.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q120100000_01_120");
    MsgDisp("Kazama","Yes.
I'm still under one roof with you today.");
    MsgDisp("主人公","Hehe, even we're with all?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q120100000_01_130");
    MsgDisp("Kazama","It's ok, still.
It's like a dream for me back in the 
day.");
    MsgDisp("主人公","( ｛風真＊＊｝ ……)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
