ChLayout(1);
MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0);
VoicePlay("G020340000_03_000");
MsgDisp("Honda","I'm thinking of changing my hair color
soon. I've done thorough research on how
hair texture changes after bleaching.");
MsgDisp("主人公","You mean going back to your natural hair
color?");
ChEye(3,0);
ChMouth(3,4);
VoicePlay("G020340000_03_010");
MsgDisp("Honda","Hmm, maybe a different color? My little
sister seems to have another color she
wants to try, so I might try it for her.");
MsgDisp("主人公","But if you do it too much, the teachers
might notice...");
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("G020340000_03_020");
MsgDisp("Honda","They probably will. But the school rules
only say 'appropriate appearance and
attire for high school students.'");
VoicePlay("G020340000_03_030");
MsgDisp("Honda","It doesn't specifically say anything about
dyeing hair or wearing piercings, right?");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2);
VoicePlay("G020340000_03_040");
MsgDisp("Honda","But there's one issue.
If I change colors again, it will really
damage my hair.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("G020340000_03_050");
MsgDisp("Honda","Just between us, my dad worries about hair
loss, so if it's genetic, in the future I
might...");
MsgDisp("主人公","......");
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,1);
VoicePlay("G020340000_03_060");
MsgDisp("Honda","You can imagine it now, right?
I definitely have to do it!");
MsgDisp("主人公","Eh, don't do it!
Don't do it!");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2);
VoicePlay("G020340000_03_070");
MsgDisp("Honda","Haa～,maybe I should stop messing with my
hair and start focusing on what's good for
it, like my dad...");
MsgDisp("主人公","(｛本多＊＊｝, I don't think you need to
worry that much...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
