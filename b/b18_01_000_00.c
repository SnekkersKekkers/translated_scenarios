ChEyeOpenLevel(1,0);
ChCheek(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoiceEVSPlay(1);
VoicePlay("B180100000_01_000");
MsgDisp("Kazama","｛主人公｝.");
MsgDisp("主人公","...Eh?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,4);
VoicePlay("B180100000_01_010");
MsgDisp("Kazama","I missed my chance on the day of
the entrance ceremony, but this 
is how I used to call you. ");
MsgDisp("主人公","Ah, yeah.
You used to call me like that.");
ChCheek(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B180100000_01_020");
MsgDisp("Kazama","So yeah, 
that is more normal for us.
...Right?");
MsgSel("Yeah, that's right.","Mmm~, that was a long time ago...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    ChCheek(1,5);
    VoicePlay("B180100000_01_030");
    VoiceEVSPlay(1);
    MsgDisp("Kazama","Isn't it, ｛主人公｝.");
    VoicePlay("B180100000_01_031");
    MsgDisp("Kazama","Well, more natural that is.");
    MsgDisp("主人公","Hehe, it's kind of funny 
isn't it?｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,0);
    VoicePlay("B180100000_01_040");
    MsgDisp("Kazama","You caught me.
Honestly, I was waiting for the 
right time for a while.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,4);
    ChEyeOpenLevel(1,0);
    VoicePlay("B180100000_01_050");
    MsgDisp("Kazama","Seriously, I would've had no
idea what to do if things
stayed like this.");
    MsgDisp("主人公","(Hehe, somehow there's a 
tingling feeling to it...)");
    break ;
    case 1:
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B180100000_01_060");
    MsgDisp("Kazama","What's up with that.
I guess you dislike it.");
    MsgDisp("主人公","I don't dislike it but...");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B180100000_01_070");
    MsgDisp("Kazama","Ah, is that right?
Then, it's fine.");
    MsgDisp("主人公","(Hmm...
Did I do something wrong?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
ChEyeOpenLevel(1,-1);
ChCheek(1,0);
