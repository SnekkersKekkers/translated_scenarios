MsgType(1);
BGOpen("ex980",0);
ChLayout(0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("T020501000_05_000");
MsgDisp("Hiiragi?","｛主人公｝.");
MsgClear();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C05_HIIRAGI_KOKU",0.01);
ChOpen(5,254,7,4,4,#1,#1,0,0);
MsgDisp("主人公","｛柊＊＊＊｝......！");
ChMotion(5,0);
Wait(16,0);
ChEye(5,4);
VoicePlay("T020501000_05_010");
MsgDisp("Hiiragi","Congratulations on your graduation.");
MsgDisp("主人公","｛柊＊＊＊｝ you too, congratulations on
your graduation.");
ChMotion(5,4);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChMouth(5,3);
VoicePlay("T020501000_05_020");
MsgDisp("Hiiragi","Yes.
I'm graduating with you......
I can't believe it.");
MsgDisp("主人公","Eh......");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,4);
ChMouth(5,4);
VoicePlay("T020501000_05_030");
MsgDisp("Hiiragi","I was able to enroll thanks to the
combined efforts of Habataki City, my
father, the chairman, and many other
people.");
ChEyeOpenLevel(5,0);
Wait(8,0);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
VoicePlay("T020501000_05_040");
MsgDisp("Hiiragi","Of course, there was no merit in me being
a Haba student, since I hadn't attended
elementary or middle school properly.");
ChEyeOpenLevel(5,9);
MsgDisp("主人公","No, even though you're busy with the
theater company, you still worked hard at
the student council, and everyone was
grateful to you.");
ChMotion(5,2);
Wait(12,0);
ChEyeOpenLevel(5,9);
VoicePlay("T020501000_05_050");
MsgDisp("Hiiragi","Thank you
......but the reality is different.");
MsgDisp("主人公","Eh?");
ChEye(5,4);
ChMouth(5,4);
ChEyeOpenLevel(5,8);
VoicePlay("T020501000_05_060");
MsgDisp("Hiiragi","I immediately realized that my studies
were not going to improve. At that same
time, the disappointed looks on everyone's
faces came to mind.");
ChEye(5,4);
ChMouth(5,0);
ChEyeOpenLevel(5,8);
VoicePlay("T020501000_05_070");
MsgDisp("Hiiragi","My only means of escape was to at the very
least serve the school by participating in
student council activities, as atonement.");
MsgDisp("主人公","｛柊＊＊＊｝......");
ChEye(5,2);
ChMouth(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("T020501000_05_080");
MsgDisp("Hiiragi","Truly, it was a menial reason.");
MsgDisp("主人公","That......");
ChMotion(5,0);
Wait(12,0);
ChEye(5,4);
ChMouth(5,4);
ChEyeOpenLevel(5,10);
VoicePlay("T020501000_05_090");
MsgDisp("Hiiragi","But,
you always cared about what I did.");
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","But......I wanted to support ｛柊＊＊＊｝
even more, but there was nothing I could
do.");
ChMotion(5,1);
Wait(30,0);
ChEye(5,4);
ChMouth(5,4);
VoicePlay("T020501000_05_100");
MsgDisp("Hiiragi","No, I was just happy that you started
talking to me and laughed together with
me.");
MsgDisp("主人公","It was nothing......");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,0);
ChMouth(5,3);
ChEyeOpenLevel(5,10);
VoicePlay("T020501000_05_110");
MsgDisp("Hiiragi","No.
Your smile was my only compass.");
ChMotion(5,0,1);
Wait(16,0);
ChEye(5,4);
ChMouth(5,3);
ChEyeOpenLevel(5,10);
ChCheek(5,5);
VoicePlay("T020501000_05_120");
MsgDisp("Hiiragi","If you're smiling......
If the one I love; you, are smiling,
then nothing is wrong. It's alright. ");
MsgDisp("主人公","Eh......");
ChEyeOpenLevel(5,0);
ChCheek(5,0);
Wait(16,0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("T020501000_05_130");
MsgDisp("Hiiragi","That's why I was able to come to school
every day. That's why I didn't give up on
the theater company and continued.");
Wait(60,0);
ChMotion(5,0,1);
Wait(16,0);
ChEye(5,4);
ChMouth(5,4);
VoicePlay("T020501000_05_140");
MsgDisp("Hiiragi","You were my only light as I struggled
blindly through school and with theater.");
MsgClear();
ChClose(5);
ChCustomLayout(5,5,0,-2.6);
Wait(30);
SEPlay("EV_SE_544");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,7);
ChOpen(5,254,0,0,0,#1,#1,0,0);
VoicePlay("T020501000_05_150");
MsgDisp("Hiiragi","Warm, lovely light......
I love you.");
